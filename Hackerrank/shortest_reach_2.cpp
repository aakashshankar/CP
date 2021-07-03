#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int maxn=3000;
void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i] << " ";
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}
int min_dist(vector<int> dist, vector<bool> visited){
    int min_val=INT_MAX, min_node;
    for(int i=0;i<dist.size();++i){
        if(dist[i]<min_val && !visited[i]){
            min_val=dist[i];
            min_node=i;
        }
    }
    return min_node;
}

vector<int> dijkstra(vector<int> a[], int n, int src){
    vector<bool> visited(n,false);
    vector<int> dist(n,int(2e5));
    int active_node,k=0;
    dist[src]=0;
    while(k<n-1){
        active_node=min_dist(dist,visited);
        visited[active_node]=true;
        for(int i=0;i<dist.size();++i){
            dist[i]=(dist[i]>dist[active_node]+a[active_node][i])?(dist[active_node]+a[active_node][i]):(dist[i]);
            // if(dist[active_node]+a[active_node][i]<dist[i]){
            //     dist[i]=dist[active_node]+a[active_node][i];
            // }
        }
        // print_vector(dist);
        k++;
    }
    return dist;
}



void solve(){
    int r,x,y,s,n;
    ll m;
    vector<int> dist;
    cin >> n >> m;
    // vector<int> a[n];
    // int** a = new int*[maxn];
    // for(int i=0;i<maxn;++i)
    // a[i] = new int[maxn];
    // a[0][0]={{0}};
    vector<int> a[maxn];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            a[i].push_back(0);
            // cout << a[i][j] << '\t';
        }
        // cout << endl;
    }
    for(int i=0;i<m;++i){
        cin >> x >> y >> r, --x,--y;
        if(a[x][y]==0 || r<a[x][y]){
            // a[x-1][y-1]=r;
            // a[x-1].insert(a[x-1].begin()+y-1,r);
            // a[y-1].insert(a[y-1].begin()+x-1,r);
            a[x][y]=r;
            a[y][x]=r;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j]==0 && i!=j)
                a[i][j]=int(2e5);
            // cout << a[i][j] << '\t';
        }
        // cout << endl;
    }
    cin >> s;
    dist=dijkstra(a,n,s-1);
    for(int i=0;i<dist.size();++i){
        if(dist[i]==0)
            continue;
        if(dist[i]==int(2e5))
            cout << -1 << " ";
        else
            cout << dist[i] << " ";
    }
    // print_vector(dist);
    // for(int i= 0;i<maxn;++i) {
    //     delete [] a[i];
    // }
    // delete [] a;
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    // int a[3000][3000];
    return 0;
}
