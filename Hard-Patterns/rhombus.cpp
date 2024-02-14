#include<iostream>
using namespace std;
void rhombus(int n){
	int row = 1;
	while(row <= n){
		//spaces
		int spaces = n - row;
		while(spaces){
			cout << "_ ";
			spaces--;
		}
		// stars
		int star = 1;
		while(star <= n){
			cout << "* ";
			star++;
		}
		cout << endl;
		row++;
	}
}
/*
_ _ _ _ * * * * *
_ _ _ * * * * *
_ _ * * * * *
_ * * * * *
* * * * *

*/
void hallowRhombus(int n){
	int row = 1;
	while(row <= n){
		// spaces
		int spaces = n - row;
		while(spaces){
			cout << "_ ";
			spaces--;
		}
		// star
		int star = 1;
		while(star <= n){
			if(star==1 || row == 1 || row == n || star == n){
				cout << "* ";
			}else{
				cout << "_ ";
			}
			star++;
		}
		cout << endl;
		row++;
	}
}

/*
_ _ _ _ * * * * *
_ _ _ * _ _ _ *
_ _ * _ _ _ *
_ * _ _ _ *
* * * * *

*/

int main(){
	int n;
	cin >> n;
	rhombus(n);
	cout << endl;
	hallowRhombus(n);
	return 0;
}
