#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fax "fax"

using namespace std;

bool is_prime(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

// int no_of_divisors(ll n){
//     int c=2;
//     for(int i=2;i<=sqrt(n);++i)
//         if(n%i==0)
//             if(n/i==i)
//                 c++;
//             else
//                 c+=2;
//     return c;
// }

bool is_t_prime(ll n){
    double ans=sqrt(n);
    if(ans-floor(ans)==0){
        if(is_prime(ans))
            return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    int n;
    ll x;
    float ans;
    cin >> n;
    // vector<int> a;
    for(int i=0;i<n;++i){
        cin >> x;
        if(x==1){
            cout << "NO\n";
            continue;
        }
        // if(no_of_divisors(x)==3)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
        // ans=sqrt(x);
        // if(ans-floor(ans)==0){
        //     if(is_prime(ans))
        //         cout << "YES\n";
        //     else
        //         cout << "NO\n";
        // }else{
        //     cout << "NO\n";
        // }
        if(is_t_prime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
        // Phax?
    }
    return 0;
}
