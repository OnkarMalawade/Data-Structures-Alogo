#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "\n Enter value of A:";
    cin>>a;
    cout<<"\nEnter Value of B:";
    cin>>b;
    char op;
    cout<<"\nEnter the Operation you want to perform: ";
    cin>> op;
    cout<<"Ans:";
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"Not Valid input";
        break;
    }
    return 0;
} // namespace std;
