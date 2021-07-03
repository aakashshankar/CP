#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

struct contest{
    int L;
    int T;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k;
    contest o;
    cin >> n >> k;
    vector<contest> a;
    for(int i=0;i<n;++i){
        cin >> o.L >> o.T;
        a.push_back(o);
    }
    int i=0;
    int lb=0;
    sort(a.begin(), a.end(), [&](contest a, contest b){return a.L>b.L;});
    while(i<n && k){
        lb+=a[i].L;
        if(a[i].T==1)
            k--;
        i++;
    }
    while(i<n){
        (a[i].T)?(lb-=a[i].L):(lb+=a[i].L);
        i++;
    }
    cout << lb << endl;
    return 0;
}
