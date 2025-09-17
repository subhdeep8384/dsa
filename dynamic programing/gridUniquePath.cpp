#include<iostream>
#include<vector>
using namespace std ;

int fn(int i , int j , vector<vector<int>> &grid) {
    if(i == 0 && j == 0 ){
        return 1 ;
    }
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
        return 0 ;
    }
    int up = fn(i -1 , j , grid) ;
    int left = fn(i , j - 1 , grid);

    return up + left ;
}
int MEMO(int i , int j , vector<vector<int>> &grid , vector<vector<int>>&dp){
    if(i == 0 && j == 0){
        return 1 ;
    }
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
        return 0 ;
    }
    if(dp[i][j] != -1 ){
        return dp[i][j] ;
    }
    int up = MEMO(i - 1 , j , grid , dp) ;
    int left = MEMO(i , j - 1 , grid , dp);
    int ans = up + left ;
    dp[i][j] = ans ;
    return ans ;
}
int Tabulation(int i , int j , vector<vector<int>>&grid  , vector<vector<int>> &dp ){
    dp[0][0] = 1 ;
    for(int l = 0 ; l < grid[0].size() ; l++ ){
        for(int k =  0 ; k < grid.size() ; k++ ){
            if(i == 0 && j == 0  ) return dp[0][0] = 1 ;
            else{
                int up , left ;
                if(i > 0 ){
                    up = dp[i - 1 ][j] ;
                }
                if(j > 0 ){
                    left = dp[i][j - 1] ;
                }
                dp[i][j] = up + left ;
            }
        }
    }
    return dp[i][j] ;
}
int main(){
    vector<vector<int>> grid = {
        {1 , 1},
        {1 ,1 },
    };
    vector<vector<int>> dp(grid.size() , vector<int>(grid[0].size() , -1)) ;
    int n = grid.size() ;
    int m = grid[0].size() ;
    int ans = fn(n - 1 , m - 1 , grid) ;
    cout << ans << endl ;
    int ans1 = MEMO(n - 1 , m - 1 , grid , dp) ;
    cout << ans1 << endl ;
    int ans2 = Tabulation(n - 1 , m - 1 , grid , dp) ;
    cout << ans2 << endl ;
    return 0 ;
}