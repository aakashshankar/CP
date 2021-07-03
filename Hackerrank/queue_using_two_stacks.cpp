#include <bits/stdc++.h>
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl '\n'

using namespace std;

class Queue{
    stack<int> st1;
    stack<int> st2;
public:
    int front();
    void enqueue(int val);
    void dequeue();
}obj;

void Queue::enqueue(int val){
    st1.push(val);
}

void Queue::dequeue(){
    if(st2.empty()){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    st2.pop();
}

int Queue::front(){
    if(st2.empty()){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    return st2.top();
}

void solve(){
    int q;
    cin >> q;
    switch(q){
        case 1:
        int x;
        cin >> x;
        obj.enqueue(x);
        break;
        case 2:
        obj.dequeue();
        break;
        default:
        cout << obj.front() << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}
