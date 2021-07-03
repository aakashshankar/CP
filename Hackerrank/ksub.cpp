#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int nC2(int n){
    return n*(n-1)/2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int k;
    cin >> k;
    int x,n;
    cin >> n;
    vector<int> rems(k,0);
    int prefix=0;
    for(int i=0;i<n;++i){
        cin >> x;
        prefix+=x;
        rems[prefix%k]++;
    }
    int ans=0;
    for(int i=0;i<k;++i){
        if(rems[i]>1){
            ans+=nC2(rems[i]);
        }
    }
    cout << ans+rems[0] << endl;
    return 0;
}
