#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int a[n][2];
    for(int i=0;i<n;++i)
        cin >> a[i][0] >> a[i][1];
    int lo,up,l,r,c=0;
    for(int i=0;i<n;++i){
        lo=up=l=r=0;
        for(int j=0;j<n;++j){
            if(j!=i){
                if(a[j][1]==a[i][1]){
                    if(a[j][0]>a[i][0])
                        r++;
                    else if(a[j][0]<a[i][0])
                        l++;
                }
                if(a[j][0]==a[i][0]){
                    if(a[j][1]>a[i][1])
                        up++;
                    else if(a[j][1]<a[i][1])
                        lo++;
                }
            }
        }
        if(l>=1 && r>=1 && lo>=1 && up>=1)
            c++;
    }
    cout << c << endl;
    return 0;
}
