#include<iostream>
using namespace std;
void sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"\nSum:"<<sum;
}
int main(){
    int size;
    cout<<"\nEnter Size of Array:";
    cin>>size;
    int arr[size];
    cout<<"\n Enter values in the Array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sum(arr,size);
    return 0;
}