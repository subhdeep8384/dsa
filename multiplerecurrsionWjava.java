class fibb{
    int fib(int n ){
        if(n <= 1 )return n ;
        return fib(n -1 ) + fib(n - 2 ) ;
    }
}


public class multiplerecurrsionWjava{
    public static void main(String [] args ){
        fibb fib = new fibb() ;
        int number =  fib.fib(7);
        System.out.println(number);
    }
}