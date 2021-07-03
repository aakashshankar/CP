#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int calc_pos(string str){
    int pos=0;
    for(char ch:str){
        if(ch=='+')
            pos++;
        else if(ch=='-')
            pos--;
    }
    return pos;
}
string prob_divide(int x, int y){
    if(x==0){
        return "0.0";
    }
    if(x==y){
        return "1.0";
    }
    string a="0.";
    int rem=x,i=1;
    while(rem!=0){
        if(i==10)
            break;
        rem*=10;
        // cout << rem/x << char(rem/x+48) <<endl;
        a+=char(rem/y+48);
        rem%=y;
        // cout << a << endl;
        i++;
    }
    return a;
}

vector<string> s;
void replace_qm(string str, int q){
    if(q==0){
        s.push_back(str);
        // cout << str << endl;
    }
    for(int i=0;i<str.length();++i){
        if(str[i]=='?'){
            str[i]='+';
            replace_qm(str,q-1);
            str[i]='-';
            replace_qm(str,q-1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int s1_pos=calc_pos(s1);
    vector<int> s2_pos;
    int q=count(s2.begin(), s2.end(), '?');
    // int i=0;
    replace_qm(s2,q);
    for(string c:s){
        s2_pos.push_back(calc_pos(c));
        // cout << s2_pos[i] << endl;
        // i++;
    }
    q=count(s2_pos.begin(), s2_pos.end(),s1_pos);
    // cout << "q: " << q << " size: " << s2_pos.size() << endl;
    // double prob=(double)(q)/(double)(s2_pos.size());
    // cout << prob << endl;
    cout << prob_divide(q,s2_pos.size()) << endl;
    return 0;
}
