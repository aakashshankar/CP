#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(1);
    int a[5][5]={
        {-1,-1,-1,-1},
        {-1,1,1,1,-1},
        {-1,1,1,1,-1},
        {-1,1,1,1,-1},
        {-1,-1,-1,-1}
    };
    int b[5][5];
    for(int i=1;i<=3;++i){
        for(int j=1;j<=3;++j){
            cin >> b[i][j];
            if(b[i][j]%2!=0){
                a[i][j]=!a[i][j];
                a[i-1][j]=!a[i-1][j];
                a[i+1][j]=!a[i+1][j];
                a[i][j-1]=!a[i][j-1];
                a[i][j+1]=!a[i][j+1];
            }
            // cout << "-----------------------------" << endl;
            // print_array(a);
        }
    }
    for(int i=1;i<=3;++i){
        for(int j=1;j<=3;++j)
            cout << a[i][j];
        cout << endl;
    }
    // cout << !-1 << endl;
    return 0;
}
