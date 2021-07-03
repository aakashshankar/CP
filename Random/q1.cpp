#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
vector<int> get_factors(int n){
    vector<int> counts;
    int o=0,e=0;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
            if(n/i==i){
                (i%2==0)?(e++):(o++);
            }else{
                (i%2==0)?(e++):(o++);
                ((n/i)%2==0)?(e++):(o++);
            }
        }
    }
    counts.push_back(o);
    counts.push_back(e);
    return counts;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x,n;
    vector<vector<int>> a;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(get_factors(x));
    }
    // for(int i=0)
    int c=0;
    for(int i=0;i<a.size();++i){
        if(a[i][0]==a[i][1]){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
