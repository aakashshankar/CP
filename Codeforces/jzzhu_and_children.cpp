#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool positive(int *a, int n){
    for(int i=0;i<n;++i){
        if(*(a+i)>0)
            return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    int ans,n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int i=0;
    while(positive(a,n)){
        if(a[i]>0){
            a[i]-=m;
            ans=i+1;
        }
        i=(i+1)%n;
    }
    cout << ans << endl;
}
