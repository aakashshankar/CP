#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'
using namespace std;
// Global variables, used throughout the algorithm
vector<vector<int>> grid;
map<pair<int, int>, bool> visited;
int c;
void dfs(int i,int j){
    visited[{i,j}]=true;
    if(grid[i-1][j-1]==1 && !visited[{i-1,j-1}]){
        c++, dfs(i-1,j-1);
    }
    if(grid[i-1][j]==1 && !visited[{i-1,j}]){
        c++, dfs(i-1,j);
    }
    if(grid[i-1][j+1]==1 && !visited[{i-1,j+1}]){
        c++, dfs(i-1,j+1);
    }
    if(grid[i][j-1]==1 && !visited[{i,j-1}]){
        c++, dfs(i,j-1);
    }
    if(grid[i][j+1]==1 && !visited[{i,j+1}]){
        c++, dfs(i,j+1);
    }
    if(grid[i+1][j-1]==1 && !visited[{i+1,j-1}]){
        c++, dfs(i+1,j-1);
    }
    if(grid[i+1][j]==1 && !visited[{i+1,j}]){
        c++, dfs(i+1,j);
    }
    if(grid[i+1][j+1]==1 && !visited[{i+1,j+1}]){
        c++, dfs(i+1,j+1);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,x;
    cin >> n;
    cin >> m;
    // While taking input, surround the 0/1 grid with zeroes to avoid boundary checking. It does not alter the algorithm
    for(int i=0;i<=n+1;++i){
        vector<int> t;
        for(int j=0;j<=m+1;++j){
            if(i==0 || i==n+1){
                t.push_back(0);
                continue;
            }
            if(j==0 || j==m+1){
                t.push_back(0);
                continue;
            }
            cin >> x;
            t.push_back(x);
        }
        grid.push_back(t);
    }
    int max=INT_MIN;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(grid[i][j]==1 && !visited[{i,j}]){
                c=1;
                dfs(i,j);
                max=std::max(max,c);
            }
        }
    }
    cout << max << endl;
    return 0;
}
