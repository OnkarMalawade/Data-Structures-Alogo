#include<iostream>
using namespace std;
/*
void reversearr(int arr[],int size){
     int start=0;
     int end=size-1;
     while (start<=end)
     {
        swap(arr[start],arr[end]);
        start++;
        end--;
     } 
}
*/
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
      
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
      
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1); 
}  
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5]={1,3,5,7,9};
    
    int b[6]={1,3,5,7,9,11};
    
    //reversearr(a,5);
    //reversearr(b,6);
    
    rvereseArray(a,0,4);
    rvereseArray(b,0,5);

    printArr(a,5);
    printArr(b,6);
    
    return 0;
}