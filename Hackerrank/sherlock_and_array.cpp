#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int j,k;
    ll n;
    cin >> n;
    ll a[n],lsum=0,rsum=0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(n==1){
        cout << "YES" << endl;
        return;
    }
    k=1;
    while(k<=n-1){
        rsum+=a[k];
        k++;
    }
    if(rsum==0){
        cout << "YES" << endl;
        return;
    }
    for(int i=1;i<n;i++){
        // k=i+1;
        lsum+=a[i-1];
        rsum-=a[i];
        // j=i-1;
        // while(j>=0){
        //     lsum+=a[j];
        //     j--;
        // }

        if(lsum==rsum){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
