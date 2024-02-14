//Butterfly Pattern
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	// Upper Part
	for(int i = 1; i <= n; i++){
		// star
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		//space
		int k = 2 * (n - i);
		while(k >= 1){
			cout << "  ";
			k--;
		}
		// star
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	// Lower Part
	for(int i = n; i >= 1; i--){
		// star
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		//space
		int k = 2 * (n - i);
		while(k >= 1){
			cout << "  ";
			k--;
		}
		// star
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
/*

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/
