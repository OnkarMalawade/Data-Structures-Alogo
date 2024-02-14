#include<iostream>
using namespace std;
void hallowRect(int totRows, int totCols){
	// outer
	for(int i = 1; i <= totRows; i++){
		// inner - col
		for(int j = 1; j <= totCols; j++){
			// cell i , j
			if(i == 1 || i == totRows || j == 1 || j == totCols){
				cout << "* ";
			}
			else{
				cout << "  ";
			}
		}
		cout << endl;
	}
}

void halfPyramid(int n){
	int row = 1;
	while(row <= n){
		int space = n - row;
		while(space){
			cout << "_ ";
			space--;
		}
		int star = 1;
		while(star <= row){
			cout << "* ";
			star++; 
		}
		row++;
		cout << endl;
	}
}
void diamond(int n){
	int row = 1;
	while(row <= n){
		// spaces
		int spaces = n - row;
		while(spaces){
			cout << "_ ";
			spaces--;
		}
		// star
		int star = 2 * row - 1;
		while(star >= 1){
			cout << "* ";
			star--;
		}
		cout << endl;
		row++;
	}
	row = n - 1;
	while(row >= 1){
		// spaces
		int spaces = n - row;
		while(spaces){
			cout << "_ ";
			spaces--;
		}
		// star
		int star = 2 * row - 1;
		while(star >= 1){
			cout << "* ";
			star--;
		}
		cout << endl;
		row--;
	}
}
int main(){
	int c,r;
	cin >> c >> r; 
	
	hallowRect(c,r);
	
	int n;
	cin >> n;
	
	halfPyramid(n);

	diamond(n);
	
	return 0;
}
/*

_ _ _ * 
_ _ * * * 
_ * * * * * 
* * * * * * *
_ * * * * *
_ _ * * * 
_ _ _ *


*/
