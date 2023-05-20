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
        char a='A'+n-i;

        while (j<=i)
        {
            
            cout<< a<<" ";
            a++;
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        /* code */
    }
    
} // namespace std;
