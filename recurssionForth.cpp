// summing n numbers

#include<iostream>
using namespace std ;
int sum(int number , int total = 0 ) {
    if(number == 0 ) return total ;
    total = total + number ;
    sum(number -1 , total );
}

int sum1(int i , int sum = 0  ){
    if(i < 1){
        return sum ;
    }
    sum1(i - 1 , sum + i);
}

int sum2(int n ){
    if(n == 0 )return 0 ;
    return n + sum2(n-1) ;
}

int factorial(int n){
    if(n ==  0  || n == 1 ) return 1 ;
    return n * factorial( n  -  1  ); 
}
int main(){
    int total = sum(10);
    int total1 = sum1(10) ;
    cout << total <<"  Total 1 is ::" << total1;
    int total3 = sum2(5);
    cout << endl <<  total3 << endl ;

    int fact = factorial(5);
    cout<< "The factorial is Z::" << fact << endl ;
}