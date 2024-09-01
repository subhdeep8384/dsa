public class largestElement{
    public static void main(String [] args ){
        int [] arr = {12,34,65,1,2,3,456,122,87787,7,87,98778,7,8,78,98};
        int max = arr[0] ;

        for(int i = 1 ; i < arr.length ; i++){
            if(arr[i] > max ){
                max = arr[i];
            }
        }

        System.out.println("The max element is : "+ max );
    }
}