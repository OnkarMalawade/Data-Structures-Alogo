#include<iostream>
#include<math.h>
using namespace std;
int bits(int dec){
    int ans=0,i=0;
    cout<<"\nEnter Decimal number:";
    cin>>dec;
    while(dec!=0)
    {
        int bit = dec & 1; 
        ans=(bit * pow(10,i))+ans;
        dec=dec>>1;
        i++;
    }
    return ans;
}
int add(int p){
    int sum=0;
    while (p!=0)
    {
        sum=sum+p%10;
        p=p/10;
        
    }
    return sum;
    
} 
int main(){
    int a,b;
    cout<<"\nAddition of the Bits :\n"<<(add(bits(a))+add(bits(b)));
    return 0;
}