#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int k;
    cin >> k;
    int x;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    rotate(a.begin(), a.end()-k, a.end());
    for(int i=0;i<a.size();++i)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
