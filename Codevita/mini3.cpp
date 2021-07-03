#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

int getMinSum(priority_queue<int>& a, int k){
    while(k--){
        int val=a.top();
        if(val==1)
            break;
        a.pop();
        val=val>>1;
        a.push(val);
    }
    int ans=0;
    while(!a.empty()){
        ans+=a.top();
        a.pop();
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    int x;
    priority_queue<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        a.push(x);
    }
    cout << getMinSum(a, k) << endl;
    return 0;
}
