#include<iostream>
#include<vector>
using namespace std ;



int f(int n , vector<int> &dp){
    if(n <= 1){
        return n ;
    }

    if(dp[n] != -1 ){
        return dp[n] ;
    }
    dp[n] = f(n-1 , dp) + f(n-2 ,dp) ;
    return dp[n] ;
}

int fT(int n , vector<int> &dp){
    dp[0] = 0 ; 
    dp[1] = 1 ;

    for(int i = 2 ; i < n ; i++){
        dp[i] = dp[i -1] + dp[i-1] ;
    }
    return dp[n] ;
}

int fO(int n){
    int prev2 = 0 ;
    int prev = 1 ;
    for(int i = 2 ; i <= n ; i++){
        int curr = prev + prev2 ;
        prev2 = prev ;
        prev = curr ;
    }
    return prev ;
}
int main(){
    vector<int> dp(6 , -1 ) ;
    int ans = f(5 , dp) ;


    cout<<"memoization : "<< ans << endl  ;
    cout << "Tabulation : " << fT(5 , dp ) << endl ;
    cout << "Optimal : "<< fO(5) ;
}