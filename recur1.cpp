#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printa(int n){
    //base  case
    if(n==0){
        return;
    }
    //recursion
    cout<<n<<" ";
    printa(n-1);
    cout<<"\n "<<n<<" ";
    return;
}
int main(){
    int n=10;
    printa(n);
    return 0;
}