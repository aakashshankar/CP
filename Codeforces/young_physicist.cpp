#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    int n,x,y,z;
    cin >> n;
    int x_sum=0,y_sum=0,z_sum=0;
    for(int i=0;i<n;i++){
        cin >> x >> y >> z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
        // cout << x_sum << " " << y_sum << " "  << z_sum << endl;
    }
    if(!x_sum && !y_sum && !z_sum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    ios::sync_with_stdio(0);
    return 0;
}
