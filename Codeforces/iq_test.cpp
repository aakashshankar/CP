#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool any_3(char a[4][4], int i, int j){
    if(a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1])
        return true;
    else if(a[i][j]==a[i+1][j+1] && a[i][j]==a[i][j+1])
        return true;
    else if(a[i][j]==a[i+1][j] && a[i][j]==a[i+1][j+1])
        return true;
    else if(a[i][j+1]==a[i+1][j+1] && a[i][j+1]==a[i+1][j])
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    char a[4][4];
    for(int i=0;i<4;++i)
        for(int j=0;j<4;++j)
            cin >> a[i][j];

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(any_3(a,i,j)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
