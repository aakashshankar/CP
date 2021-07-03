#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n,h1,h2,min;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    min=abs(a[0]-a[n-1]);
    h1=n-1, h2=0;
    for(int i=0;i<n-1;++i){
        if(abs(a[i]-a[i+1])<min){
            min=abs(a[i]-a[i+1]);
            h1=i, h2=i+1;
        }
    }
    cout << h1+1 << " " << h2+1 << endl;
    return 0;
}
