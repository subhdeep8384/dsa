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

int main() {
    vector<vector<int>> cost = {
        {1},
        {2,3},
        {3,6,7},
        {18,0,6,10}
    } ;
    vector<vector<int>> dp(cost.size() , vector<int>(cost.size() , -1)) ;
    cout << triangleSum(cost , 3 , 0 , 0) << endl ;
    cout << triangleSumMemo(cost , 3 , 0 , 0 , dp) << endl ;
}