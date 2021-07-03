#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int mx=100;

int ans;
void dfs(int a[mx][mx], int i, int j, int m, int n){
    if(a[i][j]==1)
        return;
    if(i==m && j==n){
        ans++;
    }
    dfs(a, i, j+1, m, n);
    dfs(a, i+1, j, m, n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int m,n;
    cin >> m >> n;
    int a[mx][mx];
    for(int i=0;i<n+2;++i){
        a[0][i]=1;
        a[m+1][i]=1;
    }
    for(int i=0;i<m+2;++i){
        a[i][0]=1;
        a[i][n+1]=1;
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m+2;++i){
        for(int j=0;j<n+2;++j){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    ans=0;
    dfs(a, 1, 1, m, n);
    cout << ans << endl;
    return 0;
}
