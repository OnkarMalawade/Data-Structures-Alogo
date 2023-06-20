#include<iostream>
using namespace std;
int ap(int n){
    return (n*3+7);

}
int main(){
    int a;
    cout<<"Enter value:";
    cin>>a;
    if(a>=1){
    cout<<"\nNth term of AP is:"<<ap(a);
    }
    return 0;
}