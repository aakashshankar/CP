#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

class MinStack {
    stack<int> st;
    stack<int> st2;
    long min;
public:
    /** initialize your data structure here. */
    MinStack() {
        min=INT_MAX;
    }

    void push(int x) {
        st.push(x);
        if(x<=min){
            st2.push(x);
            min=x;
        }

    }

    void pop() {
        if(top()==min){
            st2.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return st2.top();
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    MinStack obj;
    cout << "1. Push 2. Pop 3. Top 4. GetMin\n";
    short d;
    cin >> d;
    switch(d){
        case 1:
            int x;
            cin >> x;
            obj.st.push(x)
            if(x<=obj.min){
                obj.st2.push()
            }
    }
    return 0;
}
