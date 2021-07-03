#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    long a[3],min=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<3;++i){
        cin >> a[i];
        if(a[i]<min)
            min=a[i];
        else if(a[i]>maxi)
            maxi=a[i];
    }
    long s=sqrt(min);
    long r=maxi/s;
    cout << s*8+r*4 << endl;
    return 0;
}
