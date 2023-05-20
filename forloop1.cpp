#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter Value of n:";
    cin>>n;

    cout<<"\n Printing count from 1 to "<<n<<" :\n";
    int i=1;
    for ( ; i <= n; )
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
    
} // namespace std;

