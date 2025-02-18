#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int a[100][100], X[100], cot[100], cheo1[100], cheo2[100], n = 8, sum = 0, MAX = INT_MIN;
void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] == 0 && cheo1[i-j+n] == 0 && cheo2[i+j-1] == 0){
            X[i] = j;
            cot[j] = 1; cheo1[i-j+n] = 1; cheo2[i+j-1] = 1;
            if (i == n){
                for (int l = 1; l <= n; l++){
                    sum += a[l][X[l]];
                }
                MAX = max(MAX,sum);
            }
            else Try(i+1);
            cot[j] = 0; cheo1[i-j+n] = 0; cheo2[i+j-1] = 0;
        }
    }
    sum = 0;
}

int main(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << MAX << endl;
}
