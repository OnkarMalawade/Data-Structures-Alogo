#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void counter(int n){
    if(n==0){ //base case
        return;
    }
    //processing
    
    counter(n/10);

    int num = n%10;
    switch (num)
    {
    case 1:
        cout<<"One ";
        /* code */
        break;
    case 2:
        cout<< "Two ";
        break;
    case 3:
        cout<<"Three ";
        /* code */
        break;
    case 4:
        cout<< "Four ";
        break;
    case 5:
        cout<<"Five ";
        /* code */
        break;
    case 6:
        cout<< "Six ";
        break;
    case 7:
        cout<<"Seven ";
        /* code */
        break;
    case 8:
        cout<< "Eight ";
        break;
    case 9:
        cout<<"Nine ";
        /* code */
        break;
   
    default:
        break;
    }
    
    return ;
}
int main(){
    int n = 435;
    counter(n);
    return 0;
}