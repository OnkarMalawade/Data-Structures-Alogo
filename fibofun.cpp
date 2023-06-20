#include<iostream>
using namespace std;
int fibo(int n){
    int fibo=0,a=0,b=1;
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
int main()
{
    int n;
    cout<<"Enter value of nth term:";
    cin>>n;
    n-=2;
    fibo(n);
    return 0;
    
}