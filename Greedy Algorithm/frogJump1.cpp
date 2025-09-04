#include<iostream>
#include<vector>
using namespace std ;

int frogJump(vector<int> &arr , int index , int jumps ){
    if(index >= arr.size() - 1  ) return jumps ;
    int mini = INT16_MAX ;

    for(int i  = 1 ; i <= arr[index] ; i++){
        mini = min(mini , frogJump(arr , index + i , jumps + 1) );
    }
    return mini ;
}



int memo(vector<int> &arr, vector<int> &dp, int index) {
    // If we reached or passed the last index → 0 more jumps needed
    if (index >= arr.size() - 1) 
        return 0;

    // If already computed
    if (dp[index] != -1) 
        return dp[index];

    // If no moves possible from here
    if (arr[index] == 0) 
        return INT16_MAX;

    int mini = INT16_MAX;

    // Try all possible jumps
    for (int i = 1; i <= arr[index]; i++) {
        int next = memo(arr, dp, index + i);
        if (next != INT16_MAX) { 
            mini = min(mini, 1 + next); 
        }
    }

    return dp[index] = mini;
}
int main(){
    vector<int> arr = {2 , 1 , 1 };
    int result = frogJump(arr , 0 , 0);
    cout << result << endl  ;

    vector<int> dp(arr.size() , -1 ) ;
    int ans = memo(arr, dp , 0 );
    cout << ans ;
}