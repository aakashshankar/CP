#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

bool is_prime(int n){
    if(n!=2 && n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

bool next_prime(int n, int m){
    for(int i=n+1;i<=m-1;++i){
        if(is_prime(i))
            return false;
    }
    if(is_prime(m))
        return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    if(next_prime(n,m)){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
