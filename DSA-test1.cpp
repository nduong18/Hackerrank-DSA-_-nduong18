#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[100], X[100], k;

void backtrack(int i, int sum){
    for (int j = 1; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if (sum == k){
            for (int k = 1; k <= i; k++) cout << X[i] << ' ';
            cout << endl;
        }
        else Try(i+1,sum);
        sum -= a[j];
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    backtrack(1,0);
}
