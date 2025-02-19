#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n,m, cnt = 0;

void Try(int i, int j){
    if (i == n-1 && j == m-1){
        cnt++; return;
    }

    if (i+1 < n) Try(i+1,j);
    if (j+1 < m) Try(i,j+1);
}

int main(){
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> x;
    Try(0,0);
    cout << cnt;
}
