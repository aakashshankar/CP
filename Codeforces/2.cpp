#include <bits/stdc++.h>
#define ll long long
using namespace std;


void swap(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

void solve(){
    int n,k,sum=0;
    cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;++i)
        cin >> a[i];
    for(int i=0;i<n;++i)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    int i=0;
    int j=n-1;
    while(k){
        if(i>=n || j<0)
            break;
        if(a[i]<b[j]){
            swap(&a[i],&b[j]);
            j--;
            k--;
        }else{
            i++;
        }
    }
    for(int i=0;i<n;++i)
        sum+=a[i];
    cout << sum <<  endl;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
