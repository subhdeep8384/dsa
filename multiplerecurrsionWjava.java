
public class MultiplerecurrsionWjava{
    public static void main(String [] args ){
        fibb fib = new fibb() ;
        int number =  fib.fib(10);
        System.out.println(number);
    }
}


class fibb{
    int fib(int n ){
        if(n <= 1 )return n ;
        return fib(n -1 ) + fib(n - 2 ) ;
    }
}

