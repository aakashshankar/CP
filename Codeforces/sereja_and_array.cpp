#include <bits/stdc++.h>
#define ll long
#define endl '\n'

using namespace std;


void op(vector<ll>& a, int &t, int& to_add){
    switch(t){
    case 1:
        int v;
        ll x;
        cin >> v >> x;
        a[v-1]=x-to_add;

        // to_add[v-1]=0;
    break;
    case 2:
        int y;
        cin >> y;
        // for(int i=0;i<a.size();++i){
        //     a[i]+=y;
        // }
        // transform(to_add.begin(), to_add.end(), to_add.begin(), bind2nd(std::plus<int>(), y));
        to_add+=y;
        // cout << "y: " << y << " to_add: " << to_add << endl;
    break;
    default:
        int q;
        cin >> q;
        cout << a[q-1]+to_add << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    int t,n,m;
    ll k;
    cin >> n >> m;
    vector<ll> a;
    int ta=0;
    vector<int> ts(n,0);
    for(int i=0;i<n;++i){
        cin >> k;
        a.push_back(k);
    }
    for(int i=0;i<m;++i){
        cin >> t;
        op(a,t,ta);
    }
    return 0;
}
