#include<iostream>
using namespace std;
int main(){
    int a, i=1,sum=0;
    cout<<"Enter value : ";
    cin>>a;
    cout<<"\n Sum of 1 to "<<a<<" numbers:"<<endl;
    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}