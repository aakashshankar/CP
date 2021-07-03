#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int nC2(int n){
    return (n*(n-1))/2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    // unordered_map<char, int> m;
    int i=0;
    char f,p_f='_';
    int c1=0,c2,c=0,j;
    unordered_map<char, int> m;
    while(i<s.length()){
        f=s[i];
        if(f==char(p_f-1)){
            m[p_f]=0;
        }
        // c1=0, c2=0;
        j=i;
        while(i<s.length() && s[i]!=char(f+1)){
            if(s[i]==f){
                m[s[i]]++;
                // cout << s[i] << "-";
            }
            i++;
        }
        // cout << endl;
        while(i<s.length()){
            if(s[i]==char(f+1)){
                // c2++;
                m[s[i]]++;
                // cout << s[i] << "-";
            }
            i++;
        }
        cout << "\nf: " << f << "c1: " << m[f] << " c2: " << m[char(f+1)] << endl;
        if(m[f]>=2 && m[char(f+1)]>=2){
            c+=(nC2(m[f])*nC2(m[char(f+1)]));
            // cout << "\nc: " << c << endl;
        }
        i=j;
        while(s[i]==f){
            i++;
        }
        // c2=0;
        p_f=f;
        m[char(f+1)]=0;
    }

    // cout << "\n2: " << c1 << " 3: " << c2 << endl;
    cout << c << endl;
    return 0;
}
