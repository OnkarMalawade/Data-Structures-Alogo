#include<iostream>

using namespace std;

int getmin(int num[],int a){
    int mini=INT_MAX;
    for(int i=0;i<a;i++){
        mini=min(mini,num[i]);
        //if(num[i]<min){
        //    min=num[i];
        //}
    }
    return mini;
}

int getmost(int num[],int a){
    int maxi=INT_MIN;
    
    for(int i=0;i<a;i++){
        maxi=max(maxi,num[i]);
        //if(num[i]>maxi){
        //    maxi=num[i];
       // }
    }
    return maxi;
}

int main(){
    int size;
    cout<<"Enter size of Array";
    cin>>size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"Maxium Value is:"<<getmost(num,size);
    cout<<"Minimum Value is:"<<getmin(num,size);
    return 0;
}