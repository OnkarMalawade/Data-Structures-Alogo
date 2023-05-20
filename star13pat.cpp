#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1,star=1;
        while(star<=n-i)
        {
            cout<<"* ";
            star++;
        }
       
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        star=n-i+1;
        while(star>1){
            cout<<"* ";
            star--;
        }
        i++;
        cout<<endl;
        
    }
    return 0;
}