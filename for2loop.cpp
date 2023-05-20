#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value:";
    cin>>n;

    int sum=0;

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
        /* code */
    }

    cout<<sum;
    return 0;
    
}