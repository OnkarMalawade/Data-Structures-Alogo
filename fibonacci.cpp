#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1;
    cout<<"Enter value of nth term:";
    cin>>n;
    int fibo=0;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        fibo=a+b;
        cout<<fibo<<" ";
        a=b;
        b=fibo;
        /* code */
    }
    return 0;
    
}