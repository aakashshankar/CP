#include <bits/stdc++.h>
using namespace std;

bool is_prime(long n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0)
            return false;
    }
    return true;
}

bool is_prime(vector<int> list){
    for(int i=0;i<list.size();++i){
        if(!is_prime(list[i]))
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

vector<int> get_circular_nums(long n){
    vector<int> a;
    int rem,d=get_no_of_digits(n);
    for(int i=0;i<d;++i){
        rem=n%10;
        n/=10;
        n=rem*pow(10,d-1)+n;
        a.push_back(n);
    }
    return a;
}

void print_vector(vector<long> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;++i){
            cout << a[i] << " ";
        }
    }else{
        for(auto i=end-1;i>=start;--i){
            cout << a[i] << " ";
        }
    }
    cout << endl;
}


int main(){
    // cout << is_prime(37) << " " << is_prime(49) << get_no_of_digits(34265) <<endl;
    // print_vector(get_circular_nums(197));
    vector<long> primes;
    int c=0;
    for(int i=2;i<=1000000;++i){
        if(is_prime(i))
            primes.push_back(i);
    }
    // print_vector(primes);
    for(int i=0;i<primes.size();++i){
        if(is_prime(get_circular_nums(primes[i]))){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
