#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool distinct(int x){
    set<int> d;
    while(x!=0){
        d.insert(x%10);
        x/=10;
    }
    if(d.size()<4)
        return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    // cout << distinct(n) << endl;
    while(true){
        ++n;
        if(distinct(n)){
            cout << n << endl;
            break;
        }
    }
    return 0;
}
