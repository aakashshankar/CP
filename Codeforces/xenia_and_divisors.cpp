#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

// int binary_search(vector<int> a, )

int main() {
    ios::sync_with_stdio(0);
    int x,n,c=0;
    // int first=-1, second=-1, third=-1,c;
    cin >> n;
    vector<int> a;
    // vector<bool> visited(n, false);
    vector<vector<int>> vals;
    // cout << "before array input" << endl;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push_back(x);
    }
    // cout << "input over" << endl;
    int i=0;
    sort(a.begin(), a.end());
    // while(a.size()>=3){
    //     // c=0;
    //     i=0;
    //     int j,k;
    //     for(j=i+1;j<a.size();++j){
    //         if(a[j]!=a[i] && a[j]%a[i]==0){
    //             break;
    //         }
    //     }
    //     // cout << "j: " << j << endl;
    //     for(k=j+1;k<a.size();++k){
    //         if(a[j]!=a[k] && a[k]%a[j]==0){
    //             break;
    //         }
    //     }
    //     // cout << "k: " << k << endl;
    //     if(j>=a.size() || k>=a.size()){
    //         cout << -1 << endl;
    //         return 0;
    //     }
    //     vals.push_back({a[i],a[j],a[k]});
    //     auto it=a.begin();
    //     // cout << "before: " << a.size() << endl;
    //     a.erase(a.begin()+i);
    //     a.erase(a.begin()+j-1);
    //     a.erase(a.begin()+k-2);
    //     // cout << "after: " << a.size() << endl;
    // }
    // // cout << "loop done" << endl;
    // for(int i=0;i<vals.size();++i){
    //     cout << vals[i][0] << " " << vals[i][1] << " " << vals[i][2] << endl;
    // }
    // cout << "after output" << endl;
    // if(a[0]!=1){
    //     cout << -1 << endl;
    //     return 0;
    // }
    while(c<n/3){
        auto start=a.begin();
        if(*start!=1){
            cout << -1 << endl;
            return 0;
        }
        auto it2=find(a.begin(), a.end(), 2);
        if(it2==a.end()){
            auto it3=find(a.begin(), a.end(), 3);
            if(it3==a.end()){
                cout << -1 << endl;
                return 0;
            }
            auto it6=find(a.begin(), a.end(), 6);
            if(it6==a.end()){
                cout << -1 << endl;
                return 0;
            }
            // cout << *start << " " << *it3 << " " << *it6 << endl;
            vals.push_back({*start, *it3, *it6});
            a.erase(start);
            a.erase(it3-1);
            a.erase(it6-2);
            // continue;
            c++;

        }else{
            auto it4=find(a.begin(), a.end(), 4);
            if(it4!=a.end()){
                // cout << *start << " " << *it2 << " " << *it4 << endl;
                vals.push_back({*start, *it2, *it4});
                a.erase(start);
                a.erase(it2-1);
                a.erase(it4-2);
                c++;
                // continue;
            }else{
                auto it6=find(a.begin(), a.end(), 6);
                if(it6==a.end()){
                    cout << -1 << endl;
                    return 0;
                }
                // cout << *start << " " << *it2 << " " << *it6 << endl;
                vals.push_back({*start, *it2, *it6});
                a.erase(start);
                a.erase(it2-1);
                a.erase(it6-2);
                c++;
            }
                // continue;
        }
        // cout << *start << " " << *it2 << " " << *it3 << endl;
    }
    for(int i=0;i<vals.size();++i){
        cout << vals[i][0] << " " << vals[i][1] << " " << vals[i][2] << endl;
    }
    return 0;
}
