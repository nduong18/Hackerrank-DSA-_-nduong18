#include <bits/stdc++.h>
#define ll long long
using namespace std;

int sumDigit(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
         n /= 10;
    }
    return sum;
}

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n,[](int a, int b){if (sumDigit(a) != sumDigit(b)) return sumDigit(a) < sumDigit(b);
     return a < b;});
    for (int i : a) cout << i << ' ';
}
    
