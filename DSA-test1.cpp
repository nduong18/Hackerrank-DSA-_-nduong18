#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n, a[100], X[100], k;

void Try(int i, int sum, int start){
    if (sum == k){
        for (int k = 1; k < i; k++) cout << X[k] << ' ';
        cout << endl;
        return;
    }
    if (sum > k) return;

    for (int j = start; j < n; j++){
        X[i] = a[j];
        Try(i+1,sum + a[j], j);
    }
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(1,0,0);
}
