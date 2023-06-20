#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {5, 4, 7, 8, 9};
    stack<int> s;
    for(int i = 0; i < n; i++){
        s.push(arr[i]);
    } 
    for(int i=0; i<n; i++){
        arr[i] = s.top();
        s.pop();
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}