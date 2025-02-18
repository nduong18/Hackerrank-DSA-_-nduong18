#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n,k,s;
int a[25], sum = 0;
int X[100];
int cnt = 0, cnt1 = 0;

void Try(int i, int pos){
    for (int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        cnt++;
        if (sum == s && cnt == k) {
            cnt1++;
        }
        else Try(i+1,j+1);
        sum -= a[j];
        cnt--;
    }
}

int main(){
    cin >> n >> k >> s;
    for (int i = 1; i <= n; i++) a[i] = i;
    Try(1,1);
    cout << cnt1;

}
