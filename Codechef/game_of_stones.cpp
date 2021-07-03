#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

// const int maxn=1e5;

void DFS(vector<int> a[], int active_node, vector<bool>& visited, vector<int>& colours, vector<int>& scores){
    visited[active_node]=true;
    scores[colours[active_node]]++;
    for(int v:a[active_node]){
        if(!visited[v])
            DFS(a,v,visited,colours,scores);
    }
}

// int maximum(vector<int>& scores){
//     int m=INT_MIN;
//     for(int i=0;i<scores.size();++i){
//         if(scores[i]>m)
//             m=scores[i];
//     }
//     return m;
// }

// void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
//     if(end==0)
//         end=a.size();
//     if(!reverse){
//         for(auto i=start;i<end;i++){
//             cout << a[i];
//         }
//     }else{
//         for(auto i=end-1;i>=start;i--){
//             cout << a[i];
//         }
//     }
//     cout << endl;
// }

int main(){
    ios::sync_with_stdio(0);
    int n,m,x,y,max_score=0;
    cin >> n >> m;
    vector<int> colours, a[n];
    for(int i=0;i<n;++i){
        cin >> x;
        colours.push_back(x);
        a[i].clear();
    }
    for(int i=0;i<m;++i){
        cin >> x >> y;
        a[x-1].push_back(y-1);
    }
    for(int i=0;i<n;++i){
        vector<bool> visited(n,false);
        vector<int> scores(101,0);
        DFS(a,i,visited,colours,scores);
        // print_vector(scores);
        // if(max_score<maximum(scores))
        //     max_score=maximum(scores);
        max_score=max(max_score,*max_element(scores.begin(),scores.end()));
    }
    cout << max_score << endl;
    return 0;
}
