#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int X[100], a[100][100], n, MIN = INT_MAX, cmin = INT_MAX;
int visited[100];

void Try(int i, int dis){
    for (int j = 1; j <= n; j++){
        if (!visited[j]){
            X[i] = j;
            visited[j] = 1;
            dis += a[X[i-1]][X[i]];
            if (i == n) {
                MIN = min(MIN,dis + a[X[n]][1]);
            }
            else if (dis + (n-i+1)*cmin < MIN) Try(i+1,dis);
            visited[j] = 0;
            dis -= a[X[i-1]][X[i]];
        }
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            if (a[i][j]) cmin = min(cmin,a[i][j]);
        }
    }
    X[1] = 1;
    visited[1] = 1;
    Try(2,0);
    cout << MIN;
}
