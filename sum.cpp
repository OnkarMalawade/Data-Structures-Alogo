#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cout<<"Enter Number:";
    cin>>a;
    sum=(a*(a+1))/2;
    cout<<"Sum of "<<a<<" natural numbers is "<<sum;
    return 0;
}