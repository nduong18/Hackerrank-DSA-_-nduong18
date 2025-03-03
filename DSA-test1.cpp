#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], X[100];

void backtrack(int i, int sum, int start) {
    if (sum == k) {
        for (int j = 0; j < i; j++) cout << X[j] << ' ';
        cout << endl;
        return;
    }
    if (sum > k) return;

    for (int j = start; j < n; j++) {
        X[i] = a[j];
        backtrack(i + 1, sum + a[j], j);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    backtrack(0, 0, 0);
    return 0;
}
