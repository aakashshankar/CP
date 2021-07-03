#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

const int maxN=1e3;

int minDist(vector<int>& dist, vector<bool>& visited){
    int min_node,min_dist=INT_MAX;
    for(int i=0;i<dist.size();++i){
        if(dist[i]<min_dist && !visited[i]){
            min_dist=dist[i];
            min_node=i;
        }
    }
    return min_node;
}



vector<int> dijkstra(int a[maxN][maxN], int n, int src){
    vector<bool> visited(n,false);
    vector<int> dist(n,999);
    int active_node,k=0;
    // queue<int> q;
    dist[src]=0;
    // q.push(src);
    // visited[src]=true;
    while(k<n-1){
        active_node=min(dist,visited);
        visited[active_node]=true;
        for(int i=0;i<n;++i){
            dist[i]=(dist[i]>dist[active_node]+a[active_node][i])?(dist[active_node]+a[active_node][i]):(dist[i]);
        }
        k++;
    }
    return dist;
}

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i] << "\t";
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0);
    int n, src;
    cout << "Enter no of vertices: ";
    cin >> n;
    int a[maxN][maxN];
    cout << "Enter adjacency matrix: \n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> a[i][j];
        }
    }
    cout << "Enter source: ";
    cin >> src;
    if(src>n){
        cerr << "Out of bounds." << endl;
        exit(1);
    }
    vector<int> dist=dijkstra(a,n,src-1);
    print_vector(dist);
    return 0;
}
