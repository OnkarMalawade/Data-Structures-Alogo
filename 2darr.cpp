#include<iostream>
using namespace std;
int largestrowsum(int arr[][3],int row,int col){
    int maxi= INT_MIN;
    int rownum = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum =0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
            /* code */
        }
        if (sum > maxi)
        {
            maxi=sum;
            rownum = row;
            /* code */
        }
        /* code */
    }
        cout<<"Sum of maxi row value: "<< maxi<<endl;
        return row;
}
bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<row;i++){
        for (int j = 0; i < col; j++)
        {
            if(arr[i][j]==target)
            return 1;
            /* code */
        }
        
    }
    return 0;
}
int main(){
    cout<<"enter value:";
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    /* 
        0 1 2
        3 4 5
        6 7 8
    */
   /*
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
   }*/

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
            /* code */
        }
        cout<<endl;
    }
    /*
    for (int i = 0; i < 3; i++)
    {
        int sum=0,sum2=0;
        for (int j = 0; j < 3; j++)
        {
            sum2+=arr[i][j];//sum of row
            sum+=arr[j][i];//sum of column
        }
        cout<<sum<<endl;
        cout<<sum2<<endl;
    }
    int target;
    cout<<"\n enter target:";
    cin>>target;
    if(ispresent(arr, target,3,3)){
        cout<<"\nFound!";
    }
    else{
        cout<<"Not found!";
    }*/
   int ans = largestrowsum(arr,3,3);
   cout<<"Row index:"<<ans;
   return 0;
}