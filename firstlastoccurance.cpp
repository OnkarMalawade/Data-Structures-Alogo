#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int start=0;
    int ans=-1;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
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
    return ans;
}
int lastoccurance(int arr[],int size,int key){
    int start=0;
    int ans=-1;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
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
    return ans;
}
int main()
{
    int arr[7]={1,3,3,3,3,7,9};
    cout<<"\nFirst Occurance of 3:"<<firstoccurance(arr,7,3);
    cout<<"\nLast Occurance of 3:"<<lastoccurance(arr,7,3);

    return 0;
}