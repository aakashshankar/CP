#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,d,x;
    cin >> n >> d;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    for(int i=0;i<d;++i){
        x=a[0];
        // auto starta.begin();
        a.erase(a.begin());
        a.push_back(x);
    }
    for(int i=0;i<a.size();++i){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
