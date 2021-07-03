#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

int solve(){
    int ans=0,n,k;
    cin >> n >> k;
    if(k==0){
        if(n==1){
            return 1;
        }else{
            return 0;
        }
    }else if(k>n){
        return k-n;
    }else{
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}
