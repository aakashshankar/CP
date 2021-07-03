#include <bits/stdc++.h>
#define endl '\n'

using namespace std;



int main(){
    int c=0,a[5][5],x,y;
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            cin >> a[i][j];
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    c+=(abs(5/2-x)+abs(5/2-y));
    cout << c << endl;
    ios::sync_with_stdio(0);
    return 0;
}
