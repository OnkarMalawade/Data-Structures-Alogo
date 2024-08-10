/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
    static boolean checkMaj(int m, int s){
        if(m > s/2){
            return true;
        }
        return false;
    }
    
    static int maxen(int arr[]){
        int maxi=0, idx = 0;
        
        for (int i = 0; i < arr.length; i++){
           int cnt = 0;
            for(int j = 0; j < arr.length; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
                if(cnt > maxi){
                    maxi = cnt;
                    idx = i;
                }
            }
            
        }
        
    

        return maxi;
    }
    
	public static void main(String[] args) {
		int arr[] = {2, 4, 2, 8, 2, 6, 2, 7, 2};
		int maxi=0, idx = 0;
        
        for (int i = 0; i < arr.length; i++){
           int cnt = 0;
            for(int j = 0; j < arr.length; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
                if(cnt > maxi){
                    maxi = cnt;
                    idx = i;
                }
            }
            
        }
		System.out.println("Max Length is " + maxi);
		
		System.out.println("Majority Length is " + checkMaj(maxi, arr.length));
		
		System.out.println("Max Index is " + idx + " Number is " + arr[idx]);
	}
}
