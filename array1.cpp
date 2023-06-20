#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void printchArray(char arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num[10];//declare
    cout<<"First place:"<<num[4]<<endl;
    int arr[8]={4,5,7};
    char arr1[10]={'a','e','i','o','u'};
    int bsize=sizeof(arr1)/sizeof(char);
    printchArray(arr1,bsize);
    cout<<"array "<<arr[0]<<endl;
    cout<<"Array whole:";
    int asize=sizeof(arr)/sizeof(int);
    cout<<asize<<endl;
    printArray(arr,asize);
    return 0;
}