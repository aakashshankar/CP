#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int minimalSum(vector<int>& a, int k){
    if(!a.size())
        return 0;
    int index=0;
    int max=INT_MAX;
    while(k>0){
        int cur=a[index];
        if(cur<=max){
            sort(a.rbegin(), a.rend());
            index=0;
            max=a[0]/2;
            // k--;
            continue;
        }
        k--;
        cur/=2;
        a[index]=cur;
        if(index+1<int(a.size())){
            index++;
        }
    }
    return accumulate(a.begin(), a.end(), 0);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    cout << minimalSum(a,k) << endl;
    return 0;
}
