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

    if(i >= 0 && j >= 0 && grid[i][j] == -1 )return 0 ;
    int up = fn(i -1 , j , grid) ;
    int left = fn(i , j - 1 , grid);

    return up + left ;
}

int MEMO(int i , int j , vector<vector<int>> &grid , vector<vector<int>> &dp) {
    if(i == 0 && j == 0 ){
        return 1 ;
    }
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
        return 0 ;
    }

    if(i >= 0 && j >= 0 && grid[i][j] == -1 )return 0 ;
    if(dp[i][j] != -1 )return dp[i][j] ;
    int up = fn(i -1 , j , grid) ;
    int left = fn(i , j - 1 , grid);

    return dp[i][j] =  up + left ;
}

int Tabulation(int i , int j , vector<vector<int>>&grid  , vector<vector<int>> &dp ){
    dp[0][0] = 1 ;
    for(int l = 0 ; l < grid[0].size() ; l++ ){
        for(int k =  0 ; k < grid.size() ; k++ ){
            if(grid[i][j] == -1 ) dp[i][j] = 0  ;
            else if(i == 0 && j == 0  ) return dp[0][0] = 1 ;
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
int main() {

} 