#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int dec,ans=0,i=0;
    cout<<"Enter Decimal number:";
    cin>>dec;
    while(dec!=0)
    {
        int bit = dec & 1; 
        ans=(bit * pow(10,i))+ans;
        dec=dec>>1;
        i++;
    }
    cout<<" Binary number is "<<ans<<endl;
    return 0;
} // namespace name
