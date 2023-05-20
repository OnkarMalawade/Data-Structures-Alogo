#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void kreverse(int arr[],int n,int k,int m){
    //base case
    if(n == 0){
        return ;
    }

    //Solve One Element
    for (int i = 0; i < n; i=i+k)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    return ; 
}
int main(){
    int arr[6]={5,6,7,8,9,10};
    int k=3,n=6,m=n;
    kreverse(arr,n,k,m);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}