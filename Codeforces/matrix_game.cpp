#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int maxNM=50;

bool claim(int a[maxNM][maxNM], int n, int m){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]==0){
                for(int k=0;k<m;++k){
                    if(a[i][k]==1)
                        return false;
                }
                for(int k=0;k<n;++k){
                    if(a[k][j]==1)
                        return false;
                }
                a[i][j]=1;
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n,m;
    cin >> n >> m;
    int a[maxNM][maxNM];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a[i][j];
        }
    }
    int c=0;
    while(true){
        if(claim(a,n,m)){
            c++;
        }else{
            break;
        }
    }
    if(c%2==0){
        cout << "Ashish" << endl;
    }else{
        cout << "Vivek" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
