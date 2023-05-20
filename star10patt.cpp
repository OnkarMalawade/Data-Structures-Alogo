#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space<=n-i)
        {
            cout<<" ";
            space++;
            /* code */
        }
        
        int j=1;
        while (j<=i)
        {
            
            cout<< "*";
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        /* code */
    }
    
} // namespace std;
