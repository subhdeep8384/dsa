import java.util.ArrayList;
import java.util.Arrays;

public class subset{
    static class solution {
        void function(int index , int sum , ArrayList<Integer> arr , int N , ArrayList<Integer> sumSubset ){

            if(index == N ){
                sumSubset.add(sum) ;
                return ;
            }
            function(index + 1, sum + arr.get(index), arr, N, sumSubset);
            function(index + 1, sum, arr, N, sumSubset);
        }

         ArrayList<Integer> sumSubset(ArrayList<Integer> arr , int N ){
            ArrayList<Integer> sumSubset = new ArrayList<>() ;
            function(0 , 0 , arr, N , sumSubset) ;

            return sumSubset ;
        }
    }
    public static void main(String [] args ){
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(3, 1, 2));
        solution obj = new solution() ;
        ArrayList<Integer> ans = obj.sumSubset(arr, arr.size());
        System.out.println(ans);
    }
}