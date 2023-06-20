#include<iostream>
using namespace std;

int getpivot(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    
}

int main()
{
    int arr[5]={7,9,1,2,3};
    int key=2;
    cout<<"\n Pivot is "<<getpivot(arr,5,key)<<endl;
    return 0;
}