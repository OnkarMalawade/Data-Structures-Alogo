#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Value of A:";
    cin>>a;
    if(a>0){
        cout<<""<<a<<" is positive";
    }
    else if (a<0)
    {
        cout<<a<<" is negative";
    }
    else{
        cout<<"Its zero";
    }
    
    return 0;
}