public class New1{
    public static void main (String[] args) {
    
        int arr[] = {0,2,0,0,5,6,0};
    
        int temp[] = new int[arr.length];
        
        for(int i = 0, k = 0; i < arr.length; i++){
            if(arr[i] != 0){
                temp[k] = arr[i];
                k++;
            }
        }
    
        for (int i = 0; i < temp.length; i++){
            System.out.print( temp[i] + " ");
        } 
    }
}
