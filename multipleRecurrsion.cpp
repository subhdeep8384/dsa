#include<iostream>
using namespace std ;

int fib( int n ){
    int first = 0 ;
    int second =1  ;
    int number ;
    for(int i = 2 ; i <= n ; i++){
        number = first + second ;
        first = second ;
        second = number ;
    }
    return number ;
}
int fibrecurssion(int n ){
    if( n <= 1 ) return n ;
    return fibrecurssion(n - 1 ) + fibrecurssion(n - 2);
}
int main() {
    int f = fibrecurssion(30) ;
    cout << f ;
}