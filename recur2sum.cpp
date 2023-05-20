#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printa(int n){
    //base  case
    if(n==0){
        return 0;
    }
    //recursion
    //cout<<n+n<<" "<<endl;
    int j=printa(n-1)+n;
    cout<<" "<<j<<" ";
    return 0;
}
int main(){
    int n=10;
    printa(n);
    return 0;
}