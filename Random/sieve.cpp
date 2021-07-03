#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int countPrimes(int n){
    if(n==0)
        return 0;
    vector<bool> isPrime(n, true);
    isPrime[1]=false;
    for(int i=2;i*i<n;++i){
        if(!isPrime[i])
            continue;
        for(int j=i*i;j<n;j+=i)
            isPrime[j]=false;
    }
    return count(isPrime.begin()+1, isPrime.end(), true);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}
