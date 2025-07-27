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

int main(){
    vector<int> arr = {2 ,1 , 4, 12 , 9 , 11 } ;
    int size = arr.size() ;
    int ans = NonAdjacentMaxSum(size - 1 , arr) ;
    cout << ans  ;


    vector<int> dp(size , - 1 ) ;
    int ans1 = Memo(size -1 , arr , dp ) ;
    cout << endl << ans1 ;
}