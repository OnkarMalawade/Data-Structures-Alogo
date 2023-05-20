#include<iostream>
using namespace std;
void sort012(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void printA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={0,1,2,1,2,2,0,0,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"\nSize of a:"<<sizeof(a);
    cout<<"\nSize of a:"<<sizeof(a[0])<<endl;
    printf("given array is:");
    printA(a,n);
    sort012(a,n);
    printf("\nSorted Array:");
    printA(a,n);
    return 0;
}