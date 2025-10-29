#include<iostream>
#include<vector>
using namespace std ;

int triangleSum(vector<vector<int>> &cost , int lastRow , int i , int j ){
    if(i == lastRow  ) return cost[lastRow][j] ;
    int down = cost[i][j] + triangleSum(cost , lastRow , i + 1 , j );
    int diagonal = cost[i][j] + triangleSum(cost , lastRow , i + 1 , j + 1 );
    return down > diagonal ? diagonal : down ;
}
int triangleSumMemo(vector<vector<int>> &cost , int lastRow , int i , int j , vector<vector<int>> &dp ){
    if(i == lastRow  ) return cost[lastRow][j] ;
    if(dp[i][j] != -1 ) return dp[i][j] ;
    int down = cost[i][j] + triangleSumMemo(cost , lastRow , i + 1 , j , dp);
    int diagonal = cost[i][j] + triangleSumMemo(cost , lastRow , i + 1 , j + 1 , dp);
    return dp[i][j] = min(down , diagonal) ;
}

int tabulation(vector<vector<int>>&cost , int lastRow , int i , int j ,  vector<vector<int>> &dp  ) {
    for(int j = 0 ; j < cost[lastRow].size() ; j++  ){
        dp[lastRow][j] = cost[lastRow][j];

        for(int i = lastRow - 1 ; i >= 0 ; i-- ){
            for(int j = i ; j >=0 ; j--){
                int down = cost[i][j] + dp[i+1 ][j] ;
                int diagonal = cost[i][j] + dp[i+1 ][j+1] ;
                dp[i][j] = min(down , diagonal) ;
            }
        }
    }
    return dp[0 ][0] ;
}

int main() {
    vector<vector<int>> cost = {
        {1},
        {2,1},
        {3,0,0},
        {18,0,6,0} 
    } ;
    vector<vector<int>> dp(cost.size() , vector<int>(cost.size() , -1)) ;
    cout << triangleSum(cost , 3 , 0 , 0) << endl ;
    cout << triangleSumMemo(cost , 3 , 0 , 0 , dp) << endl ;
    cout << tabulation(cost , 3 , 0 , 0 , dp) << endl ;
    return 0 ;
}