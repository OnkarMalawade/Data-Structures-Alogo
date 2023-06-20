#include<iostream>
using namespace std;
void printk(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }   
}
void sort01(int arr[],int n){
    int left=0,right=n-1,step=0;
    while (left<right)
    {
        while(arr[left]==0){
            left++;
        }
        while (arr[right]==2)
        {
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }  
    }
}
int main(){
    int arr[8]={1,2,1,2,1,1,0,0};
    sort01(arr,8);
    printk(arr,8);
    return 0;
}