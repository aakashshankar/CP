#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    string a;
    cin >> a;
    int n=a.length();
    int i=0;
    while(i<n){
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
            a[i]=' ', a[i+1]=' ', a[i+2]=' ';
            i+=2;
        }
        i++;
    }
    i=0;
    while(i<n){
        if(a[i]!=' '){
            cout << a[i];
            if(a[i+1]==' ')
                cout << ' ';
        }
        i++;
    }
    return 0;
}
