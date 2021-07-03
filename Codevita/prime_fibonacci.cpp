#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


bool is_prime(int n){
    if(n==2)
        return true;
    if(n==1 || n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

int no_of_digits(int n){
    int c=0;
    while(n){
        n/=10;
        c++;
    }
    return c;
}

ll get_fibonacci(ll a, ll b, int c){
    ll sum;
    for(int i=2;i<c;++i){
        sum=a+b;
        // cout << i << ": " << sum << endl;
        a=b;
        b=sum;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> primes;
    for(int i=n1;i<=n2;++i){
        if(is_prime(i)){
            primes.push_back(i);
        }
    }
    unordered_set<int> combinations;
    int num;
    for(long unsigned int i=0;i<primes.size();++i){
        for(long unsigned int j=0;j<primes.size();++j){
            if(i==j)
                continue;
            num=primes[i]*pow(10, no_of_digits(primes[j]))+primes[j];
            combinations.insert(num);
        }
    }
    primes.clear();
    for(int i:combinations){
        if(is_prime(i))
            primes.push_back(i);
    }
    int min=*min_element(primes.begin(), primes.end()), max=*max_element(primes.begin(), primes.end()), c=primes.size();
    // cout << "size: " << c << " min: " << min << " max: " << max << '\t' <<get_fibonacci((ll)(min), (ll)(max), c) << endl;
    cout << get_fibonacci((ll)(min), (ll)(max), c);
    return 0;
}
