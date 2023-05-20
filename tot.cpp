#include <iostream>
using namespace std;
int main() {
    int amount = 0;
    cout<<"Enter the amount of your product : ";
    cin>>amount;
    int n1=0,n2=0,n5=0,n10=0,n20=0, n50=0, n200=0, n100=0, n500=0;

    switch(amount >= 500) {
        case 1: 
            n500 = amount/500;
            amount -= n500 * 500;
        break;
    }

    switch(amount >= 200) {
        case 1 : 
            n200 = amount/200;
            amount -= n200 * 200;
        break;
    }

    switch(amount >= 100) {
        case 1:
            n100 = amount/100;
            amount -= n100 * 100;
        break;
    }

    switch(amount >= 50) {
        case 1:
            n50 = amount/50;
            amount -= n50 * 50;
        break;
    }

    switch(amount >= 20) {
        case 1:
            n20 = amount/20;
            amount -= n20 * 20;
        break;
    }

    switch(amount >= 10) {
        case 1:
            n10 = amount/10;
            amount -= n10 * 10;
        break;
    }

    switch(amount >= 1) {
        case 1:
            n1 = amount/1;
            amount -= n1 * 1;
        break;
    }

    cout<<"500 : "<<n500<<"\n";
    cout<<"200 : "<<n200<<"\n";
    cout<<"100 : "<<n100<<"\n";
    cout<<"50 : "<<n50<<"\n";
    cout<<"20 : "<<n20<<"\n";
    cout<<"10 : "<<n10<<"\n";
    cout<<"1 : "<<n1<<"\n";
}