#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={5, 3, 4, 2, 8};
    int arr1[3], arr2[2];
    int count = -1, count1 = -1;

    for(int i=0; i< 5; i++){
       if(i%2 == 0){
            count++;
            arr1[count] = arr[i];
       }
       if(i%2 != 0){
        count1++;
        arr2[count1] = arr[i];
       }
    }
    cout<<"Array Group:";
    for(int i=0;i< (sizeof(arr1)/sizeof(int));i++){
        cout<<" "<<arr1[i];
    }
    for(int i=0; i < (sizeof(arr2)/sizeof(int));i++){
        cout<<" "<<arr2[i];
    }
    return 0;
}