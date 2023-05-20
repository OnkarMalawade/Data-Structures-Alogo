#include<iostream>
using namespace std;
void reversearr(int arr[],int size){
     int start=0;
     int end=size-1;
     while (start<=end)
     {
        swap(arr[start],arr[end]);
        start++;
        end--;
        /* code */
     } 
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
    
    reversearr(a,5);
    reversearr(b,6);
    
    printArr(a,5);
    printArr(b,6);
    
    return 0;
}