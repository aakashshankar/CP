#include <bits/stdc++.h>
#define ll long long
using namespace std;


vector<int> multiply(vector<int> m, int n){
    // vector<ll> res;
    // fill(res,m.size());
    // int d=no_of_digits(n);
    int carry=0;
        // if(k>0){
        //     m.insert(m.begin(),0);
        // }
    for(int i=0;i<m.size();++i){
        m[i]=m[i]*n+carry;
        carry=m[i]/10;
        m[i]%=10;
    }
        // res.push_back(carry);
    while(carry!=0){
        m.push_back(carry%10);
        carry/=10;
    }
    return m;
}

void print_vector(vector<ll> a, bool reverse=false, int start=0, int end=0){
    if(end==0)
        end=a.size();
    if(!reverse){
        for(auto i=start;i<end;i++){
            cout << a[i];
        }
    }else{
        for(auto i=end-1;i>=start;i--){
            cout << a[i];
        }
    }
    cout << endl;
}

int main(){
    vector<int> m={0,0,1};
    for(int i=99;i>=1;--i){
        m=multiply(m,i);
    }
    int sum=0;
    // printVector(m,true);    //9999*98
    for(int i:m)
        sum+=i;
    cout << sum << endl;
    return 0;
}
