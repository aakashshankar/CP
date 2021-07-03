#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int largestDivisibleIndex(vector<int>& a){
    int largestDivisible=0;
    for (long unsigned int i = 1; i < a.size(); i++){
        if(a[largestDivisible]<a[i])
            largestDivisible=i;
    }
    return largestDivisible;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        sum+=a[i];
    }
    int ans=sum;
    while(k--){
        // auto it=max_element(a.begin(), a.end());
        // *it=floor(*it/2);
        int li=largestDivisibleIndex(a);
        // cout << a[li] << endl;
        ans-=a[li];
        a[li]/=2;
        ans+=a[li];
    }
    // cout << accumulate(a.begin(), a.end(), 0) << endl;
    cout << ans << endl;
    return 0;
}
