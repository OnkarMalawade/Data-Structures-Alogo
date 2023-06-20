#include<iostream>
using namespace std;

void update(int ar[],int n){
    cout<<"Inside Function"<<endl;
    ar[0]=120;
    for(int i=0;i<3;i++){
        cout<<ar[i]<<" ";
    }cout<<endl;
    cout<<"going back to main"<<endl;
}

int main(){
    int arr[3]={23,5,8};
    update(arr,3);
    cout<<"Main fun";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    cout<< endl;
    return 0;
}