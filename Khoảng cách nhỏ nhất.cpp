#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        if (n == 1) cout << "0\n";
        else{
            int MIN = INT_MAX;
            for (int i = 0; i < n-1; i++){
                MIN = min(MIN,abs(a[i]-a[i+1]));
            }
            cout << MIN << "\n";
        }
}
    
