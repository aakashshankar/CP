#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<vector<int>> a;
    int x;
    for(int i=0;i<6;++i){
        vector<int> temp;
        for(int j=0;j<6;++j){
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    // vector<int> t;
    int c,max=INT_MIN;
    for(int i=0;i<=3;++i){
        for(int j=0;j<=3;++j){
            c=(a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            cout << c << endl;
            // t.push_back(c);
            max=std::max(c,max);
        }
    }
    cout << max << endl;
    return 0;
}
