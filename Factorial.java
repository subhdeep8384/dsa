public class Factorial {
    static class Fact{
        int factorial(int n ){
            if(n < 1 ){
                return 1 ;
            }
            return n * factorial(n - 1);
        }

        int Sum(int n ){
            if(n == 0 )return 0 ;
            return n + Sum(n-1);
        }
    }
    public static void main(String [] args ){
        Fact f = new Fact();
        int fa =  f.factorial(5);
        System.out.println(fa);
        int sum = f.Sum(10);
        System.out.println(sum);
    }
}