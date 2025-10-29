#include<iostream>
#include<vector>
using namespace std  ;

int maxFallingPathSum(vector<vector<int>>& path, int i , int j ){
    int n = path.size();//4 i
    int m = path[0].size(); //3 j
    if( j < 0 || j >= m  ) return INT16_MIN ;    
    if( i == 0  ) return path[0][j] ;

    int up = path[i][j] + maxFallingPathSum(path , i -1 , j ) ;
    int leftDigonal = path[i][j] + maxFallingPathSum(path , i - 1 , j -1 ) ;
    int rightDigonal = path[i][j] + maxFallingPathSum(path , i -1 , j + 1 ) ;

    int maxi = max(up , max(leftDigonal , rightDigonal )) ;

    return maxi ;
}

int maxFallingPathSumMEMO(vector<vector<int>>& path, int i , int j , vector<vector<int>>& dp ){
    int n = path.size();
    int m = path[0].size(); 


    if(  dp[i][j] != -1   ) return dp[i][j] ;
    if( j < 0 || j >= m  ) return INT16_MIN ;    
    if( i == 0  ) return path[0][j] ;

    int up = path[i][j] + maxFallingPathSum(path , i -1 , j ) ;
    int leftDigonal = path[i][j] + maxFallingPathSum(path , i - 1 , j -1 ) ;
    int rightDigonal = path[i][j] + maxFallingPathSum(path , i -1 , j + 1 ) ;

    int maxi = dp[i][j] = max(up , max(leftDigonal , rightDigonal )) ;

    return maxi ;
}

int main() {
    vector<vector<int>> path = {
        {11,21,34},
        {41,53,69},
        {7,81,99},
        {100,101,102}
    };
    vector<vector<int>> dp(4,vector<int>(3,-1));

    int ans = INT16_MIN;
    int ans1 = INT16_MIN;
    for (int j = 0; j < path[0].size(); j++) {
        ans = max(ans, maxFallingPathSum(path, 3, j ));
        ans1 = max(ans1, maxFallingPathSumMEMO(path, 3, j , dp  ));
    }

    cout<<ans<<endl;
    cout <<ans1 << endl ;
    return 0;
}