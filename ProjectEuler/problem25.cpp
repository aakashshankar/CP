#include <bits/stdc++.h>
#define endl '\n'
#define ll long long

using namespace std;

vector<int> add(vector<int> a, vector<int> b){
    vector<int> res;
    int i,carry=0,t;
    if(a.size()<=b.size()){
        for(i=0;i<a.size();++i){
            t=a[i]+b[i]+carry;
            if(t>=10)
                carry=1;
            else
                carry=0;
            res.push_back(t%10);
        }
        while(i<b.size()){
            t=b[i]+carry;
            if(t>=10)
                carry=1;
            else
                carry=0;
            res.push_back(t%10);
            i++;
        }
    }else{
        for(i=0;i<b.size();++i){
            t=a[i]+b[i]+carry;
            if(t>=10)
                carry=1;
            else
                carry=0;
            res.push_back(t%10);
        }
        while(i<a.size()){
            t=a[i]+carry;
            if(t>=10)
                carry=1;
            else
                carry=0;
            res.push_back(t%10);
            i++;
        }
    }
    if(carry==1)
        res.push_back(1);
    return res;
}

void print_vector(vector<int> a, bool reverse=false, int start=0, int end=0){
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
    ios::sync_with_stdio(0);
    vector<int> a={1}, b={1},res;
    int i=2;
    while(res.size()<1000){
        res=add(a,b);
        a=b;
        b=res;
        ++i;
    }
    print_vector(res,true);
    cout << i << endl;
    return 0;
}
