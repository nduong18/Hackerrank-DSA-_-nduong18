#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, final = 0;
char a[100];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = 'B';
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 'A'){
        a[i] = 'B';
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 'A';
}


int main(){
    cin >> n;
    ktao();
    while (final == 0){
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << "\n";
        sinh();
    }
}
