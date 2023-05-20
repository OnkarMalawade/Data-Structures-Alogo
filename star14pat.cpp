#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
       //1st triangle upper numbers
       int j=1;
       while (j<=n-i+1)
       {
        cout<<j<<" ";
        j++;
        /* code */
       } 
       //stars
       int star=1;
       while (star<= (i-1)*2)
       {
        cout<<"* ";
        star++;
        /* code */
       }
       //numbers
       j=n-i+1;
       while (j>=1)
       {
        cout<<j<<" ";
        j--;
        /* code */
       }
       
       i++;
       cout<<endl;
        
        
    }
    return 0;
}