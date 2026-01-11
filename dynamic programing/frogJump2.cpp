#include<iostream>
#include<vector>
using namespace std ;

int frogJump(int index , vector<int> &cost ){
    if(index == 0 ) return 0 ;
    int mSteps = INT32_MAX ;

    for(int i = 1 ; i <= index ; i++ ){
        if(index - i >= 0 ){
            int jump = frogJump(index - i , cost) + abs(cost[index] - cost[index - i ]) ;
            mSteps = min(mSteps , jump ) ;
        }
    }
    return mSteps ;
}

int main(){
    vector<int> cost = {30  ,5, 200 } ;
    vector<int> dp(3 , -1 ) ;
    int ans = frogJump(2 , cost) ;
    cout << ans  ;
}