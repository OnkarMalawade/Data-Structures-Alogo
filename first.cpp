#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    /*cout<<"\n Hello \n World"<< endl <<"heloo"<<endl;
    int a=1235;
    int b=0;
    char c=99;
    int d='b';
    float sizea= sizeof(a); 
    int z= -56;
    cout<<z<<endl;
    
    cout<<"\n"<<sizea;
    cout<<"\n"<<c;
    cout<<"\n"<<d;
    cout<<"\n Address:"<<&a;
    cout<<endl<<(!b);
   */
    int i = 5;
   
    int *ptr=&i;
    int **ptr2=&ptr;
    cout<<*ptr<< " " <<i<<" "<<ptr<<" "<<ptr2<<" "<<*ptr2<<" "<<**ptr2;
    return 0;
}