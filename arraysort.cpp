#include<iostream>
using namespace std;
void sorted(int arr[],int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Size of the Array:";
    cin >> n;
    int arr[n];
    cout<<"\nEnter the elements in the array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"\nBefore Sorted:";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    sorted(arr,n);
    cout<<"\nArray Sorted:";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}