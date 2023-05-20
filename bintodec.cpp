#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int bin,ans=0,i=0;
    cout<<"Enter Binary number:";
    cin>>bin;
    while(bin!=0)
    {
        int bit = bin %10; 
        if(bit==1){
        ans=pow(2,i)+ans;
        }

        bin=bin/10;
        i++;
    }
    cout<<" Binary number is "<<ans<<endl;
    return 0;
}