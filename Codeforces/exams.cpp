#include <bits/stdc++.h>
#define endl '\n'
#define ll long

using namespace std;

void swap(ll& a, ll& b){
    ll t=a;
    a=b;
    b=t;
}

// void bubble_sort(vector<vector<ll>>& ab){
//     for(int i=0;i<ab.size();++i){
//         for(int j=1;j<ab.size();++j){
//             if(ab[j][0]==ab[j-1][0] && ab[j][1]<ab[j-1][1]){
//                 swap(ab[j][1])
//             }
//         }
//     }
// }

int main() {
    ios::sync_with_stdio(0);
    vector<vector<ll>> ab;
    int n;
    ll a,b;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a >> b;
        ab.push_back({a,b});
    }
    auto sortcol0=[&](vector<ll>& v1, vector<ll>& v2){return v1[0]<v2[0];};
    auto sortcol1=[&](vector<ll>& v1, vector<ll>& v2){return v1[1]<v2[1];};
    sort(ab.begin(), ab.end(), sortcol0);
    int i=0,j;
    ll t;
    while(i<n){
        t=ab[i][0];
        j=i;
        while(i<n && ab[i][0]==t){
            i++;
        }
        if(i!=j){
            sort(ab.begin()+j, ab.begin()+i, sortcol1);
        }
        i++;
    }

    ll last=ab[0][1];
    for(int i=1;i<n;++i){
        if(ab[i][1]>=last){
            last=ab[i][1];
        }else{
            last=ab[i][0];
        }
    }
    cout << last << endl;
    return 0;
}
