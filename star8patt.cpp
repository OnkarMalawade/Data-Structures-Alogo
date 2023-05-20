#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char a='A'+i+j-2;
            cout<< a<<" ";
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        /* code */
    }
    
} // namespace std;
