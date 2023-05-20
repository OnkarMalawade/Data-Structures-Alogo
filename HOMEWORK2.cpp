#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int> arr,int n){
    if(n >=arr.size()){
        return true;
    }
    
    return ((arr[n]<arr[n-1]? false : sorted(arr, n+1)));
}
int main(){
    int n = 8;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool k = sorted(arr,1);

    if(k){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }

    return 0;
}
