#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int row = 1;
	while(row <= n){
	//upper left number
	int unum = 1;
	while(unum <= (n-row+1)){
		cout << unum << " ";
		unum++;
	}	
	//lower star
	int lstar = 1;
	while(lstar < row){
		cout << "* ";
		lstar++;
	}
	//lower star2
	int rstar = 1;
	while(rstar < row){
		cout << "* ";
		rstar++;
	}
	// upper right number
	int urnum = n - row + 1;
	while(urnum >= 1){
		cout << urnum << " ";
		urnum--;
	}
	cout << endl;
	row++;	
	}
	return 0;
}

/*
1234554321
1234**4321
123****321
12******21
1********1

*/
