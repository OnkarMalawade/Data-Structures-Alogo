#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        
        int j=1,space=1;
        while (space<i)
        {
            cout<<" ";
            space++;            /* code */
        }
        
        while (j<=n-i+1)
        {
            
            cout<< "*";
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        /* code */
    }
    return 0;
    
}