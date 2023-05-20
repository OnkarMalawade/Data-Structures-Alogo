#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value:";
    cin >> n;
    int i=1,a=n*n;
     while (i<=n)
     {  
        int j=1;
        while (j<=n)
        {
            cout<<a;
            a--;
            j++;
        }
        cout<<endl;
        i++;
        
        /* code */
     }
     
    return 0;

} 
