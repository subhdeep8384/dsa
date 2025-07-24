#include<iostream>
#include<vector>
using namespace std ;

int frogJump(int ind , vector<int> &cost ){
    if(ind == 0 ) return 0 ; 
    int right = INT32_MAX ;
    int left = frogJump(ind - 1 , cost ) + abs(cost[ind] - cost[ind - 1]);
    if(ind > 1 ){
        right = frogJump(ind -2 , cost ) + abs(cost[ind] - cost[ind - 2]);
    }

    return min(right , left ) ;
}

int frogMemo(int ind , vector<int> &cost , vector<int> &dp){
    int left = INT32_MAX ;
    int right = INT32_MAX ;
    if(ind == 0 ) return 0 ; 
    if(dp[ind] != - 1) return dp[ind] ;
    left =  frogMemo(ind -1 , cost , dp ) + abs(cost[ind] - cost[ind -1 ] ) ;
    if(ind > 1 ){
        right = frogMemo(ind - 2 , cost , dp) + abs(cost[ind] - cost[ind - 2 ]) ;
    }

    return dp[ind] = min(left , right) ;
}


int frogTab(int ind  , vector<int> &cost , vector<int> &dp ){
    dp[0] = 0 ; 
    int left = INT32_MAX ;
    int right = INT32_MAX ;
    for(int i = 1 ; i <= 2   ; i++ ){
        left = dp[i - 1] + abs(cost[i] - cost[i-1]) ;

        if(i > 1 ){
            right = dp[i- 2] + abs(cost[i -2] - cost[i]) ;
        }
        dp[i] = min(left , right ) ;
    }
    return dp[cost.size() - 1] ;
}
int main(){
    vector<int> cost = {30 , 10, 20} ;
     vector<int> dp(3 , -1 ) ;
    int ans = frogJump(2 , cost) ;

    int ans1 = frogMemo(2 , cost , dp ) ;
    cout << ans << endl << ans1 << endl  ;

    cout << "Answer of tabulation is :: " ;
    int ans2 = frogTab(0 , cost , dp ) ;
    cout << endl << ans2 ;
}