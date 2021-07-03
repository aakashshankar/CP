#include <bits/stdc++.h>

using namespace std;

bool is_prime(long n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0)
            return false;
    }
    return true;
}

int get_no_of_digits(long n){
    int c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    return c;
}

bool is_left_truncatable_prime(long n){
    int d;
    while(n!=0){
        d=get_no_of_digits(n);
        if(!is_prime(n))
            return false;
        n/=pow(10,d-1);
    }
    return true;
}

bool is_right_truncatable_prime(long n){
    while(n!=0){
        if(!is_prime(n))
            return false;
        n/=10;
    }
    return true;
}

int main(){
    int c=0,i=11;
    long sum=0;
    /*
    for(int i=2;i<=1000000;++i){
        if(is_prime(i))
            primes.push_back(i);
    */
    while(c!=11){
        if(is_left_truncatable_prime(i) && is_right_truncatable_prime(i)){
            c++;
            sum+=i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}
