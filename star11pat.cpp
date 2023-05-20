#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        
        int j=n;
        while (j>=i)
        {
            
            cout<< "*";
            j--;
            /* code */
        }
        i++;
        cout<<endl;
        /* code */
    }
    
}