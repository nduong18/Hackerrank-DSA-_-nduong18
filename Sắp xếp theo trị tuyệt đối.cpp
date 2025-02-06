#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1000000007;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    stable_sort(a,a+n,[](int a, int b){return abs(a) < abs(b);});
    for (int i : a) cout << i << ' ';
}
    
