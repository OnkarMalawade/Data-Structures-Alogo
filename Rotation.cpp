#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4, 5, 6,7};
    int n = 7;
    int d = 1;
    int temp[n];

    int i, j;
    for(i = d, j = 0; i < n; i++, j++){
        temp[j] = arr[i];
    }
    for(i = 0; j < n; j++, i++){
        temp[j] = arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    
    
    
    int arr2[] = {1,2,3,4,5,6,7};
    n = 7;
    d = 2;
    int temp2[n];
    i = 0, j = 0;
    for (i = 0, j = d; i < n; i++, j++) {
        temp2[(j + d) % n] = arr2[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << temp2[i] << " ";
    }
    return 0;
    
    int arr3[] = {1,2,4,5}; 
}
