#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

bool is_fibonacci(ll& sum, ll&a, ll&b){
    if(sum==a+b)
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    int n;
    ll x;
    vector<ll> a;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    if(n==2){
        cout << 2 << endl;
        return 0;
    }
    // cout << (0==0+0) << endl;
    int l,r,i=0,maxlen=0;
    while(i<n-2){
        l=i;
        while(i<n-2 && is_fibonacci(a[i+2], a[i+1], a[i])){
            // cout << a[i] << " " << a[i+1] << " " << a[i+2] << " i, i+1, i+2: " << i << ", " << i+1 << ", " << i+2 << endl;
            i++;
        }
        r=i+1;
        // if(r-l+1>maxlen){
        //     // cout << "maxlen: " << maxlen << " r-l+1: " << r-l+1 << endl;
        //     maxlen=r-l+1;
        // }
        maxlen=max(maxlen, r-l+1);
        i++;
    }
    if(maxlen==0){
        cout << 2 << endl;
    }else{
        cout << maxlen << endl;
    }
    return 0;
}
