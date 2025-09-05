#include <bits/stdc++.h>
using namespace std;

int frogJump(vector<int> &cost , int steps , int index  ){
    if(index == 0 ){
        return 0 ;
    }
    int minSteps = INT_MAX;  
    // for(int i = 0 ; i <= cost.size() ; i++ ){
        for(int j = 1 ; j <= steps ; j++ ){

            if(index - j >= 0 ){
                int jump = frogJump(cost , steps , index - j ) + abs(cost[index] - cost[index -j]) ;
                minSteps = min(minSteps , jump ) ;
            }
        }
    // }
    return minSteps ;
}

int Memo(vector<int> &cost , int steps , int index , vector<int> &dp ){
    if(index == 0 ){
        return 0 ;
    }
    if(dp[index] != -1 ){
        return dp[index] ;
    }
    int minSteps = INT_MAX;  
    // for(int i = 0 ; i <= cost.size() ; i++ ){
        for(int j = 1 ; j <= steps ; j++ ){

            if(index - j >= 0 ){
                int jump = frogJump(cost , steps , index - j ) + abs(cost[index] - cost[index -j]) ;
                minSteps = min(minSteps , jump ) ;
            }
        }
    // }
    return dp[index] = minSteps ;
}

int TABU(vector<int> &cost , int steps , int index , vector<int> &dp ){
    if(index == 0 ){
        return 0 ;
    }
    if(dp[index] != -1 ){
        return dp[index] ;
    }
    int minSteps = INT_MAX;  
    // for(int i = 0 ; i <= cost.size() ; i++ ){
        for(int j = 1 ; j <= steps ; j++ ){

            if(index - j >= 0 ){
                int jump = dp[index - j ] + abs(cost[index] - cost[index -j]) ;
                minSteps = min(minSteps , jump ) ;
            }
        }
    // }
    return dp[index] = minSteps ;
}

int main (){
    vector<int>cost = {20 , 30 , 10 , 30 , 10 } ;
    int steps = 3 ;
    cout << frogJump(cost , steps , cost.size() - 1 ) << endl ;

    vector<int> dp(cost.size() , -1 ) ;
    cout << Memo(cost , steps , cost.size() - 1  , dp) << endl ;

    cout << TABU(cost , steps , cost.size() - 1 , dp ) ;
    return 0 ;
}