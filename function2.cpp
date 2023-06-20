#include<iostream>
using namespace std;
int facto(int a){
    int fact=1;
    for(int i=1; i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=(facto(n));
    int deno=facto(r)*facto(n-r);
    return num/deno;
}
int main(){
    int n,r;
    cout<<"Enter value=";
    cin>>n>>r;
    cout<<nCr(n,r);
   
    return 0;
}