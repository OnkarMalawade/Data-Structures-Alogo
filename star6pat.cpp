#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of A:";
    cin>>n;
    char a='A';
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<a<< " ";
            a++;
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        
        /* code */
    }
    
    return 0;
} // namespace std;
