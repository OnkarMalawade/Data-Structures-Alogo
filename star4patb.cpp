#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of A:";
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<(char)(65+j-1)<< " ";
            j++;
            /* code */
        }
        row++;
        cout<<endl;
        
        /* code */
    }
    
    return 0;
} // namespace std;
