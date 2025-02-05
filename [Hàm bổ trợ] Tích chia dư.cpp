#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1000000007;

int main()
{
    ll n; cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll tong = 1;
    for (ll i = 0; i < n; i++){
        tong *= a[i];
        tong %= mod;
    }

    cout << tong << "\n";
}
