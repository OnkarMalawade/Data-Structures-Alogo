#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of A:";
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char a=('A'+ i-1);
            cout<<a<< " ";
            j++;
            /* code */
        }
        i++;
        cout<<endl;
        
        /* code */
    }
    
    return 0;
} // namespace std;
