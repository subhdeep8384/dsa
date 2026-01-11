#include<iostream>
#include<vector>
using namespace std ;

int waysToClimbStairs(long long n ){
   if (n <= 1 ){ return 1 ;} 
//    if (n == 1 ){ return 1 ;} 
   int left = waysToClimbStairs(n - 2 );
   int right = waysToClimbStairs( n - 1);

 
   return left + right ;
}

int memo(long long n , vector<int> &dp ){
    if(n == 1 )return 1 ;
    if(n == 0 )return 1 ;
    if(dp[n] != -1 ){
        return dp[n] ;
    }
    dp[n] = memo(n-1 , dp) + memo(n-2 , dp) ;
    return dp[n] ;
}

int tabu(long long n ,vector<int>&dp){
    dp[0] = 1 ; 
    dp[1] = 1 ;

    for(int i = 2 ; i <= n ; i++ ){
       dp[i] = dp[i-1] + dp[i-2] ;     
    }

    return dp[n] ;
}

int main(){
    int n = 4 ;
    int ans = waysToClimbStairs(n) ;
    cout << ans << "" << endl ; 


    vector<int>dp(n + 1 , -1 ) ;


    int ans2 = memo(n , dp) ;
    cout << ans2 << endl ;


    int ans3 = tabu(n , dp) ;
    cout << ans3  ; 
}