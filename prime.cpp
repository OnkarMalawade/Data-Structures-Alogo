#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    bool isPrime=1;
    for (int i = 2; i < n; i++)
    {
        if(n%2==0){
           isPrime=0;
           break;
        }
        
    }
    if(isPrime==0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
    
    
} // namespace std;
