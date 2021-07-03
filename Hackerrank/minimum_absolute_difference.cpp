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
    int x;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int min=INT_MAX;
    for(int i=0;i<n-1;++i){
        min=std::min(min, abs(a[i]-a[i+1]));
    }
    cout << min << endl;
    return 0;
}
