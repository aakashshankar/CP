#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;


vector<int> st;
void superStack(vector<string> ops){

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    int val, j;
    string a;
    cin >> n;
    vector<string> ops;
    for(int i=0;i<n;++i){
        cin >> a;
        if(a=="push"){
            cin >> val;
            st.push_back(val);
        }else if(a=="pop"){
            st.pop_back();
        }else{
            cin >> j;
            cin >> val;
            for(int k=0;k<j;++k){
                st[k]+=val;
            }
        }
        if(st.empty())
            cout << "EMPTY" << endl;
        else
            cout << st[st.size()-1] << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;


void superStack(vector <string> operations) {

}
int main()
{
    int operations_size = 0;
    cin >> operations_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    vector<string> operations;
    for(int i = 0; i < operations_size; i++) {
        string operations_item;
        getline(cin, operations_item);
        operations.push_back(operations_item);
    }

    superStack(operations);

    return 0;
}

*/
