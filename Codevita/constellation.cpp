#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

vector<vector<char>> U={{'*','.','*'},
                        {'*','.','*'},
                        {'*','*','*'}};
vector<vector<char>> O={{'*','*','*'},
                        {'*','.','*'},
                        {'*','*','*'}};
vector<vector<char>> I={{'*','*','*'},
                        {'.','*','.'},
                        {'*','*','*'}};
vector<vector<char>> A={{'.','*','.'},
                        {'*','*','*'},
                        {'*','.','*'}};
vector<vector<char>> E={{'*','*','*'},
                        {'*','*','*'},
                        {'*','*','*'}};
string ans="";
vector<vector<char>> a;
map<char, int> m;

bool compare(vector<vector<char>> a, vector<vector<char>> b){
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(a[i][j]!=b[i][j])
                return false;
        }
    }
    return true;
}

void checkChar(int j){
    vector<vector<char>> t={{a[0][j],a[0][j+1],a[0][j+2]},
                            {a[1][j],a[1][j+1],a[1][j+2]},
                            {a[2][j],a[2][j+1],a[2][j+2]}};
    if(compare(t,A)){
        ans+='A';
        m['A']++;
    }else if(compare(t,E)){
        ans+='E';
        m['E']++;
    }else if(compare(t,I)){
        ans+='I';
        m['I']++;
    }else if(compare(t,O)){
        ans+='O';
        m['O']++;
    }else if(compare(t,U)){
        ans+='U';
        m['U']++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    char ch;
    for(int i=0;i<3;++i){
        vector<char> t;
        for(int i=0;i<n;++i){
            cin >> ch;
            t.push_back(ch);
        }
        a.push_back(t);
    }
    int i=0;
    while(i<n){
        if(a[0][i]=='#' && a[1][i]=='#' && a[2][i]=='#'){
            if(m['A']>0 || m['E']>0 || m['I']>0 || m['O']>0 || m['U']>0){
                ans+='#';
            }
            i++;
            continue;
        }
        if(a[0][i]=='.' && a[1][i]=='.' && a[2][i]=='.'){
            i++;
            continue;
        }
        checkChar(i);
        i+=3;
    }
    cout << ans;
    return 0;
}
