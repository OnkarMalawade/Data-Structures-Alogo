#include<iostream>
using namespace std;
int main(){
    int a, i=2,sum=0;
    cout<<"Enter value : ";
    cin>>a;
    cout<<"\n Sum of even numbers 1 to "<<a<<" numbers:"<<endl;
    while (i<=a)
    {
        sum=sum+i;
        i+=2;
    }
    cout<<sum;
    return 0;
}