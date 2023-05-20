#include<iostream>
using namespace std;
int dummy(int n){
    int k=n*n;
    cout<<"\n n is "<<n<<endl;
    return k;
}
int main(){
    int n;
    cin >> n;
    dummy(n);
    cout<<"number is "<<n<<endl;
    return 0;
}