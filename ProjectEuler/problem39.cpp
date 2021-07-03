#include <bits/stdc++.h>

using namespace std;

int get_no_of_solutions(int p){
    float j;
    int i=1,c=0;
    while(i<p){
        j=((float)(p*(p-2*i)))/(2*(p-i));
        if(j==int(j) && j>0){
            // cout << "i: " << i << " j: " << j << " k: " << sqrt(i*i+j*j) << endl;;
            c++;
        }
        i++;
    }
    return c/2;
}

int main(){
    int p=1,maxP=INT_MIN;
    // cout << get_no_of_solutions(940) << endl;
    while(p<=1000){
        if(get_no_of_solutions(p)>maxP){
            cout << p << " " << maxP << endl;
            maxP=get_no_of_solutions(p);
        }
        ++p;
    }
    // cout << maxP << endl;
}
