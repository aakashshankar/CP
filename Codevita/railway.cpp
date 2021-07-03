#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> a;
    int x,y;
    int ans=1;
    for(int i=0;i<n;++i){
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(), a.end(), [&](vector<int> a, vector<int> b){return a[0]<b[0];});
    int min=a[0][0]+a[0][1];
    for(int i=1;i<n;++i){
        if(a[i][0]<=min){
            ans++;
        }
        min=std::min(min, a[i][0]+a[i][1]);
    }
    cout << ans << endl;
    return 0;
}
