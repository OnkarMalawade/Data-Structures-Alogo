#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid])//goto right
        {
            start=mid+1;
        }
        else if(key<arr[mid])//goto left
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6]={1,3,5,6,7,9};
    int odd[5]={4,5,6,7,9};

    int Eindex=binarysearch(even,6,7);
    cout<<"\n Index of 18 is"<<Eindex;
    
    int oindex=binarysearch(odd,5,7);
    cout<<"\n Index of 18 is"<<oindex;
    return 0;
}
