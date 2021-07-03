#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    for(int i=0;i<=5;++i){
        for(int j=5-i;j>0;--j){
            cout<<'-';
        }
        cout << "*****" << endl;
    }
    return 0;
}
