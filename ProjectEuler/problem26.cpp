#include <bits/stdc++.h>

using namespace std;

string inverse(int x){
    string a="0.";
    int rem=1,i=1;
    while(rem!=0){
        if(i==10000)
            break;
        rem*=10;
        // cout << rem/x << char(rem/x+48) <<endl;
        a+=char(rem/x+48);
        rem%=x;
        // cout << a << endl;
        i++;
    }
    return a;
}


int get_recurring_cycle_length(int n){
    string inv=inverse(n)+'_';
    int k,c,t,i,init=2,i_flag=0;
    // cout << inv[2] << endl;
        // if(i>=inv.length()-1)
        //     return -1;
    while(init<5){
        k=init;
            // cout << "k: " << k << endl;
            // cout << inv[k] << endl;
        if(i_flag==0){
            i=k+1;
            i_flag=1;
        }
        while(i<=inv.length()/2 && inv[k]!=inv[i]){
                // cout << "i: " << i << endl;
            i++;
            // cout << inv[i] << " ";
        }
            // cout << i << endl;
        c=i-k;
            // cout << "c: " << c <<endl;
        // cout << c << endl;
        t=c;
        while(c>0 && inv[i]==inv[k]){
            i++;
            k++;
            c--;
        }
        if(c==0 && inv[i]==inv[k]){
            return t;
        }
        if(i>=inv.length()/2){
            init++;
            i_flag=0;
        }
    }
        // cout << "init: " << init << endl;
    return 0;
}



int main(int argc, char **argv){
    // string a="Aakash";
    // char ch='e';
    // cout << a << " " << a[2] << a+ch << endl;
    // cout << inverse(46) << " " << inverse(19).length() << endl;
    // cout << get_recurring_cycle_length(46) << endl;
    // cout << get_recurring_cycle_length(11) << endl;
    // int n;
    // cin >> n;
    // cout << inverse(n) << endl;
    // cout << get_recurring_cycle_length(n) << endl;
    long i=2,n;
    int maxlen=0, len;
    while(i<1000){
        len=get_recurring_cycle_length(i);
        if(len>maxlen){
            maxlen=len;
            n=i;
        }
        i++;
    }
    cout << n << endl;
    return 0;
}
