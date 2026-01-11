#include<iostream>
#include<vector>
using namespace std ;

int maxAnswer(int index , vector<int> &arr){ 
    if(index == 0 ) return arr[index] ;

    if(index < 0 ) return 0 ; 
    int take = arr[index] + maxAnswer(index - 2 , arr) ;
    int notTake = maxAnswer(index -1 , arr) ;
    return max(take , notTake ) ;
}

int Memo(int index , vector<int> &arr , vector<int> &dp ){
    dp[0] = arr[0] ;
    if(dp[index] != -1) return dp[index ] ;
    if(index < 0 ) return 0 ; 
    int take = dp[index] = arr[index] + maxAnswer(index - 2 , arr) ;
    int notTake = dp[index - 1]  =maxAnswer(index -1 , arr) ;
    return dp[index] = max(take , notTake ) ;
}
int Tabu(int index , vector<int> &arr , vector<int> &dp ){
    dp[0] = arr[0] ;
    if(index == 0 ) return 0 ;
    
}
int main() {
    vector<int> arr = {1, 2, 43, 5 } ;
    cout << maxAnswer(arr.size() - 1 , arr ) << endl ;

    vector<int> dp(arr.size() , -1 ) ;
    cout << Memo(arr.size() - 1 , arr , dp ) << endl ;

    cout << Tabu(arr.size() - 1 , arr , dp ) << endl ;
}