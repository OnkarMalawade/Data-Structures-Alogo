#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter Value:";
    cin>>ch;
    if (ch>='A'&& ch<='Z')
    {
        cout<<ch<<" is in Upper Case";
    }
    else if (ch>='a' && ch<='z')
    {
        cout<<"This is in Lower case";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is Digit";
    }
    else{
        cout<<" Invalid ";
    }
    
    
    return 0;

}