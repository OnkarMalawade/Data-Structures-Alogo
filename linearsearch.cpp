#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
             return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={5,-7,10,7,1,9,6,51,4,8};
    cout<<"\n Enter Key:";
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found)
    {//found ==1
        cout<<"Key is Present\n";
    }else{
        cout<<"Not Key Present\n";
    }
    return 0;
}