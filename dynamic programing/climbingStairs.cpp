#include<iostream>
using namespace std ;

int waysToClimbStairs(long long n ){
   if (n <= 1 ){ return 1 ;} 
//    if (n == 1 ){ return 1 ;} 
   int left = waysToClimbStairs(n - 2 );
   int right = waysToClimbStairs( n - 1);

 
   return left + right ;
}

int main(){
    int ans = waysToClimbStairs(0) ;
    cout << ans  ; 
}