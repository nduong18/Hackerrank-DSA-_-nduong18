#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod = 1000000007;

int main()
{
    int n; cin >> n;
    set <int> se;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    cout << se.size();
}
