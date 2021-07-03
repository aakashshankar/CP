#include <bits/stdc++.h>
// #define long ll
using namespace std;

// long sum(long a[100000], int i, int j){
//     if(i>j){
//         return 0;
//     }
//     long tot=0;
//     for(int x=i;x<=j;++x)
//         tot+=a[x];
//     return tot;
// }
// long maxi(long a, long b, long c){
//     return (max(a,b)>=c)?(max(a,b)):(c);
// }
//
//
// long cross_mod_sum(long a[100000], int l, int m, int r, int mod){
//     long sum=0,lsum=INT_MIN,rsum=INT_MIN,t1,t2;
//     for(int i=m;i>=l;--i){
//         sum+=a[i];
//         if(sum%mod>lsum){
//             lsum=sum%mod;
//             t1=sum;
//         }
//     }
//     // cout << lsum << " " << t1 << endl;
//     sum=0;
//     for(int i=m+1;i<=r;++i){
//         sum+=a[i];
//         if(sum%mod>rsum){
//             rsum=sum%mod;
//             t2=sum;
//         }
//     }
//     // cout << rsum << " " << t2 << endl;
//     return maxi((t1+t2)%mod, lsum, rsum);
// }
//
//
// long max_subarray_mod_sum(long a[100000], int l, int r, int mod){
//     if(l==r)
//         return a[l]%mod;
//     int m=(l+r)/2;
//     return maxi(max_subarray_mod_sum(a,l,m,mod),max_subarray_mod_sum(a,m+1,r,mod),cross_mod_sum(a,l,m,r,mod));
// }

void solve(){
    long n,m,max_mod_sum=0,tot;
    cin >> n >> m;
    long a[n];
    long prefix=0;
    set<long> s;
    s.insert(0);
    for(int i=0;i<n;++i){
        cin >> a[i];
        // if(a[i]%m>max_mod_sum)
        //     max_mod_sum=a[i]%m;
    }
    // for(int i=0;i<n-1;++i){
    //     tot=a[i];
    //     for(int j=i+1;j<n;++j){
    //         tot+=a[j];
    //         if((tot%m)>max_mod_sum)
    //             max_mod_sum=tot%m;
    //     }
    // }
    // max_mod_sum=max_subarray_mod_sum(a,0,n-1,m);
    for(int i=0;i<n;++i){
        // Compute prefix sum of elements till index i
        prefix=(prefix+a[i])%m;
        // find maximum prefix sum
        max_mod_sum=max(prefix,max_mod_sum);
        // Find element just greater prefix
        auto j=s.lower_bound(prefix+1);
        // if(j!=s.end()){
        max_mod_sum=max(max_mod_sum, prefix-(*j)+m);
        // }
        s.insert(prefix);
    }
    cout << max_mod_sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    // cout << maxi(3,1,45);
    return 0;
}
