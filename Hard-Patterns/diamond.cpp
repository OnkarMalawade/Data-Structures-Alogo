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

int main(){
	int c,r;
	cin >> c >> r; 
	
	hallowRect(c,r);
	
	int n;
	cin >> n;
	
	halfPyramid(n);
	
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
