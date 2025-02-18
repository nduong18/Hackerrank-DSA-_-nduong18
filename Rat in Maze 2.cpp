#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int a[100][100], n, found = 0;
string s = "";
set <string> se;

void Try(int i, int j){
    if (i == n && j == n){
        found = 1;
        se.insert(s);
    }

    if (i+1 <= n && a[i+1][j] == 1){
        s += "D";
        a[i+1][j] = 0;
        Try(i+1,j);
        s.pop_back();
        a[i+1][j] = 1;
    }

    if (i-1 >= 1 && a[i-1][j] == 1){
        s += "U";
        a[i-1][j] = 0;
        Try(i-1,j);
        s.pop_back();
        a[i-1][j] = 1;
    }

    if (j+1 <= n && a[i][j+1] == 1){
        s += "R";
        a[i][j+1] = 0;
        Try(i,j+1);
        s.pop_back();
        a[i][j+1] = 1;
    }

    if (j-1 >= 1 && a[i][j-1] == 1){
        s += "L";
        a[i][j-1] = 0;
        Try(i,j-1);
        s.pop_back();
        a[i][j-1] = 1;
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    Try(1,1);
    if (se.size() != 0) for(auto it : se) cout << it << endl;
    else cout << "-1";
}
