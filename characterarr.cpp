#include<iostream>
using namespace std;
int getlen(char ch[]){
    int c=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        c++;
    }
    return c;
}
void reversestr(char ch[],int c){
    int s=0;
    int e=c-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }

}
int main(){
    char ch[10];
    cin>>ch;
    //ch[2]= '\0';
    cout<<ch<<endl;
    int len=getlen(ch);
    cout<<getlen(ch)<<endl;
    reversestr(ch,len);
    cout<<ch;
    return 0;
}