#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8] = {5,-6 ,8, 9 ,6 ,-5,7,3};
    int n = 8;
    cout<<"\nSum of the two numbers is Equals to Zero :";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == 0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }

        }

    }
    return 0;
}