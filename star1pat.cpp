#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1,i=1;
    while (row<=n)
    {
        int column=1;
        while (column<=row)
        {
            cout<<i<<" ";
            column++;
            i++;
        }
       
        cout<<endl;
        row++;
        
    }
    return 0;
    
} // namespace std;