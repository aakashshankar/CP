#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n,w=0;
    cin >> n;
    int a[7];
    for(int i=0;i<7;++i)
        cin >> a[i];
    while(true){

        n-=a[w];
        if(n<=0){
            cout << w+1 << endl;
            break;
        }
        w=(w+1)%7;
    }
    return 0;
}
