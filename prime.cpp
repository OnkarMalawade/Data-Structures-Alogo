#include<iostream>
using namespace std;
bool isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"\nNot Prime";
            return 0;
            /* code */
        }
        
        /* code */
    }
    cout<<"\nPrime number";
    return 1;
} // namespace std;
int main(){
    int a;
    cout<<"\nEnter Number:";
    cin>>a;
    if(isprime(a)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}