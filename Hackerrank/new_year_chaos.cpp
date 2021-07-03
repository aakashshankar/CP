#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

void solve(){
    int n;
    cin >> n;
    int x;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    // vector<int> bribes(0,n);
    int bribes=0,c;
    for(int i=0;i<n;++i){
        c=0;
        for(int j=0;j<n;++j){
            if(a[j]<a[i])
                c++;
        }
        if(c>2){
            cout << "Too chaotic" << endl;
            return;
        }
        bribes+=c;
    }
    cout << bribes << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
