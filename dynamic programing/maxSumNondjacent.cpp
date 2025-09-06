#include<iostream>
#include<vector>
using namespace std ;

int NonAdjacentMaxSum(
    int index ,
    vector<int> &arr 
){
    if(index == 0 ) return arr[index] ;
    if(index < 0 ) return 0 ;
    int take = arr[index] + NonAdjacentMaxSum(index - 2 , arr) ;
    int notTake = NonAdjacentMaxSum(index - 1 , arr );

    return max(take , notTake) ;
}

int Memo(
    int index , 
    vector<int> &arr ,
    vector<int> &dp 
){
    dp[0] = arr[0] ;
    if(index < 0 ) return 0 ;
    if(dp[index] != -1 ) return dp[index] ;
    int pick =  dp[index] = arr[index] + Memo(index - 2 , arr, dp ) ;
    int notPick =  dp[index - 1] = 0 + Memo(index - 1 , arr , dp ) ;
    return max(pick , notPick) ;
}

int Tabu(vector<int> &arr) {
    int n = arr.size();
    if(n == 0) return 0;
    if(n == 1) return arr[0];

    vector<int> dp(n, 0);
    dp[0] = arr[0];

    for(int i = 1; i < n; i++) {
        int take = arr[i];
        if(i > 1) {
            take += dp[i - 2];
        }

        int notTake = dp[i - 1];

        dp[i] = max(take, notTake);
    }

    return dp[n - 1];
}

int SpaceOpt(vector<int> &nums ){
    int n = nums.size() ;
    int prev = nums[0] ;
    int prev2 = 0 ; 

    for(int i = 1 ; i < n ; i++ ){
        int take = nums[i] ;
        if(i > 1 ) take+=prev2 ;

        int notTake = prev ;

        int curr = max(take , notTake) ;
        prev2 = prev ; 
        prev = curr ;
    }
    return prev ;
}




int main(){
    vector<int> arr = {
    12 , 3 , 2 , 1 , 11
};
    int size = arr.size() ;
    int ans = NonAdjacentMaxSum(size - 1 , arr) ;
    cout <<"By recurssion : " << ans  << endl;


    vector<int> dp(size  , - 1 ) ;
    int ans1 = Memo(size -1 , arr , dp ) ;
    cout << endl << "By Memoization :"  <<ans1 << endl ;

    int ans2 = Tabu( arr ) ;
    cout <<"By tabulation :" <<ans2  ;
}