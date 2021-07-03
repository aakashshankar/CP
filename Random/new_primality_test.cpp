#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool is_prime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3 || n==5 || n==7)
        return true;
    return (((n*n)-1)%24==0 && n%5!=0 && n%7!=0);
}

int main() {
    ios::sync_with_stdio(0);
    int i=1;
    vector<int> sieve_of_eratosthenes;
    while(i<1000){
        // cout << i << endl;
        if(is_prime(i)){
            cout << i << endl;
            sieve_of_eratosthenes.push_back(i);
        }
        i++;
    }
    cout << "Size: " << sieve_of_eratosthenes.size() << endl;
    return 0;
}
