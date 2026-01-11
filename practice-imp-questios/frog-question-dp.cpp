#include <iostream>
#include <vector>
using namespace std;

int frogJump(vector<int> &cost, int index, int jumps)
{
    // if(index == 0 ) return jumps ;

    // int oneStep = frogJump(cost , index - 1 , jumps + 1) ;
    // int twoSteps = INT32_MAX ;
    // if(index > 1 ){
    //     int twoSteps = frogJump(cost , index - 2 , jumps + 1) ;
    // }
    // return min(oneStep , twoSteps ) ;
    if (index == 0) return 0;
    int twoSteps = INT32_MAX;
    int onestep = frogJump(cost, index - 1, jumps + 1) + abs(cost[index] - cost[index - 1]);

    if (index > 1)
    {
        twoSteps = frogJump(cost, index - 2, jumps + 1) + abs(cost[index] - cost[index - 2]);
    }

    return min(onestep, twoSteps);
}

int frofMEMO(int index, vector<int> &cost, vector<int> &dp)
{
    int oneStep = INT32_MAX;
    int twoSteps = INT32_MAX;

    if (index == 0)
        return 0;
    if (dp[index] != -1)
        return dp[index];

    oneStep = frofMEMO(index - 1, cost, dp) + abs(cost[index] - cost[index - 1]);
    if (index > 1)
    {
        twoSteps = frofMEMO(index - 2, cost, dp) + abs(cost[index] - cost[index - 2]);
    }
    return dp[index] = min(oneStep, twoSteps);
}

int frogTABULATION(int index , vector<int> &cost , vector<int> &dp ){
    dp[0] = 0 ;
    int oneSteps = INT32_MAX ;
    int twoSteps = INT32_MAX ;

    for(int i = 1 ; i < cost.size() ; i++ ){
        oneSteps = dp[i - 1] + abs(cost[i] - cost[i-1]) ;

        if(i > 1){
            twoSteps = dp[i - 2] + abs(cost[i - 2] - cost[i]) ;
        }

        dp[i] = min(oneSteps , twoSteps ) ;
    }
    return dp[cost.size() - 1] ;
}
int main()
{
    vector<int> cost = {10, 20, 30, 10};
    int size = cost.size();
    int ans = frogJump(cost, size - 1, 0);
    cout << ans << endl;
    vector<int> dp(size, -1);
    int ans1 = frofMEMO(size - 1, cost, dp);
    cout << ans1 << endl;

    int ans2 = frogTABULATION(0, cost, dp);
    cout << ans2 << endl;
}