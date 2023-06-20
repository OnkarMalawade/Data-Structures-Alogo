#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter Value A:";
    cin>>a;
    cout<<"\nEnter Value B:";
    cin>>b;

    /*int ans=1;

    for(int i=1; i<=b; i++){
        ans=ans*a;
    }*/
    cout<<"\n Square:"<<power(a,b);
    return 0;
} 
