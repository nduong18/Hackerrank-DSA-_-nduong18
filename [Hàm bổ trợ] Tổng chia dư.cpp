#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1000000007;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int tong = 0;
    for (int i = 0; i < n; i++){
        tong += a[i];
        tong %= mod;
    }

    cout << tong << "\n";
}
