/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
	int arr[] = {-2, -3, -4, -1, -2, -1, -5};
    
    int maxi = 0;
    for(int i = 0; i < arr.length; i++){
      if(maxi > arr[i]){
        maxi = arr[i];
      }  
    }
    
    int curr = 0;
    
    if(arr.length == 1){
        System.out.println(arr[0]);
    }
    else{
            for(int i = 0; i < arr.length-1; i++){
                curr = arr[i];
                for (int j = i+1; j < arr.length; j++){
                    if(maxi < curr){
                        maxi = curr;
                    }
                    curr += arr[j];
                }
            }
            System.out.println(maxi);
        }
    }
    
}
