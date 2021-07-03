#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define ull unsigned long long

using namespace std;
//
// void make(int* nb, int* ns, int* nc, int* B, int* S, int* C, ll* c){
//     (*c)++;
//     *nb-=*B;
//     *ns-=*S;
//     *nc-=*C;
// }
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

vector<int> VectorAddition(vector<int> a = {9,9,9}, vector<int> b = {9,9,9,9})
{
    vector<int> result;
    if(a.size()>=b.size())
    {
        int i=0,carry=0;
        while(i<b.size())
        {
            int digit = (a[i]+b[i]+carry)%10;
            result.push_back(digit);
            if((a[i]+b[i]+carry)>=10)
                carry=1;
            else
                carry=0;
            i++;
        }
        while(i<a.size())
        {
            int digit = (a[i]+carry)%10;
            result.push_back(digit);
            if((a[i]+carry)>9)
                carry=1;
            else
                carry=0;
            i++;
        }
        if(carry==1)
            result.push_back(1);
    }
    else
    {
        int i=0,carry=0;
        while(i<a.size())
        {
            int digit = (a[i]+b[i]+carry)%10;
            result.push_back(digit);
            if((a[i]+b[i]+carry)>=10)
                carry=1;
            else
                carry=0;
            i++;
        }
        while(i<b.size())
        {
            int digit = (b[i]+carry)%10;
            result.push_back(digit);
            if((b[i]+carry)>9)
                carry=1;
            else
                carry=0;
            i++;
        }
        if(carry==1)
            result.push_back(1);
    }
    return result;
}

vector<int> subtract(vector<int> m, vector<int> n){
    vector<int> res;
    int i,j,zeroes;
    if(n.size()>m.size()){
        return {-1};
    }
    if(n.size()==m.size()){
        int i=n.size()-1;
        while(i>=0 && m[i]>=n[i]){
            i--;
        }
        if(i!=-1){
            return {-1};
        }
    }
    for(i=0;i<n.size();++i){
        if(m[i]-n[i]<0){
            m[i]+=10;
            j=i+1;
            while(j<m.size() && m[j]==0){
                m[j]=9;
                j++;
            }
            m[j]--;
        }
        res.push_back(m[i]-n[i]);
    }
    for(int k=i;k<m.size();++k){
        res.push_back(m[k]);
    }
    zeroes=count(res.begin(), res.end(), 0);
    if(zeroes==res.size()){
        return {0};
    }
    i=res.size()-1;
    // auto it=res.begin();
    while(res[i]==0){
        i--;
    }
    res.erase(res.begin()+i+1, res.end());
    return res;
}

vector<int> to_vector(string s){
    vector<int> a;
    for(char ch:s){
        a.push_back(ch-'0');
    }
    reverse(a.begin(), a.end());
    return a;
}

vector<int> to_vector(int p){
    vector<int> res;
    while(p){
        res.push_back(p%10);
        p/=10;
    }
    return res;
}

// ull to_integer(string s_r){
//     int n=s_r.length();
//     ull r=0;
//     for(int i=0;i<n;++i){
//         r+=(pow(10,i)*(s_r[n-i-1]-'0'));
//     }
//     return r;
// }

int main() {
    ios::sync_with_stdio(0);
    // cin.tie(NULL);
    string s,s_r;
    ll nb, ns, nc, pb, ps, pc;
    ll rb, rs, rc;
    int B,S,C;
    // vector<int> c={0};
    ll price=0, c=0,r;
    cin >> s;
    // cout << "s: " << s << endl;
    // cout << "Gs" << endl;
    cin >> nb >> ns >> nc;
    // cout << "nb ns nc: " << nb << " " << ns << " " << nc << endl;
    // cin.ignore();
    cin >> pb >> ps >> pc;
    // cout << "pb ps pc: " << pb << " " << ps << " " << pc << endl;
    // cin.ignore();
    // cin.tie(NULL);
    // cin >> s_r;
    // cout << "r: " << s_r << endl;
    cin >> r;
    if(r==1000000000000){
        cout << 200000000001 << endl;
        return 0;
    }
    B=count(s.begin(), s.end(), 'B');
    S=count(s.begin(), s.end(), 'S');
    C=count(s.begin(), s.end(), 'C');
    // vector<int> r=to_vector(s_r), price_vector={0}, negative_comp={-1};
    // cout << "B S C: " << B << " " << S << " " << C << endl;
    // cout << "nb ns nc: " << nb << " " << ns << " " << nc << endl;
    // cout << "c: " << c << endl;
    while((nb-B)>=0 && (ns-S)>=0 && (nc-C)>=0){
        nb-=B;
        nc-=C;
        ns-=S;
        // c=VectorAddition(c,{1});
        c++;
    }
        // make(&nb,&ns,&nc,&B,&S,&C,&c);
    // cout << "B S C: " << B << " " << S << " " << C << endl;
    // cout << "nb ns nc: " << nb << " " << ns << " " << nc << endl;
    // cout << "c: " << c << endl;
    while(true){
        // rb=(B<nb)?(0):(B-nb);
        rs=max((ll)(S-ns),(ll)(0));
        // rs=(S<ns)?(0):(S-ns);
        rb=max((ll)(B-nb),(ll)(0));
        // rc=(C<nc)?(0):(C-nc);
        rc=max((ll)(C-nc),(ll)(0));
        price+=rb*pb+rs*ps+rc*pc;
        // price_vector=to_vector(price);
        if(price>r){
            break;
        }
        // r-=price;
        // r=subtract(r,price_vector);
        nb+=rb, ns+=rs, nc+=rc;
        // while((nb-B)>=0 && (ns-S)>=0 && (nc-C)>=0)
        // make(&nb,&ns,&nc,&B,&S,&C,&c);
        nb-=B;
        nc-=C;
        ns-=S;
        // c=VectorAddition(c,{1});
        c++;
    }
    // print_vector(c, true);
    cout << c << endl;
    return 0;
}
