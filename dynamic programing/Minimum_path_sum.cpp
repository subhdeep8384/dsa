#include <iostream>
#include <vector>

using namespace std;
int minCost(int i, int j, vector<vector<int>> &grid)
{
    if (i == 0 && j == 0)
        return grid[0][0];
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        return INT16_MAX;
    int up = grid[i][j] + minCost(i - 1, j, grid);
    int left = grid[i][j] + minCost(i, j - 1, grid);
    return min(up, left);
}
int minCostMEMO(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
        return grid[0][0];
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        return INT16_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    int up = grid[i][j] + minCostMEMO(i - 1, j, grid, dp);
    int left = grid[i][j] + minCostMEMO(i, j - 1, grid, dp);
    return dp[i][j] = min(up, left);
}

int minCostTABU(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    dp[0][0] = grid[0][0];
    for (int m = 0; m < grid.size(); m++)
    {
        for (int n = 0; n < grid[0].size(); n++)
        {
            int up , down ;
            if (i == 0 && j == 0) dp[m][n] =  grid[0][0];
            if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) return INT16_MAX;
            if(m > 0 ){
                int up = dp[m - 1][n] + grid[m][n];
            }
            if(n > 0 ){
                int down = dp[m][n -  1] + grid[m][n] ; 
            }

            dp[i][j] = min(up , down);
        }
    }
    return dp[i - 1 ][j -1 ]; 
}

int main()
{

    vector<vector<int>> grid = {
        {10, 8, 7},
        {10, 5, 100},
        {100, 1, 1}};
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));

    cout << minCost(grid.size() - 1, grid[0].size() - 1, grid) << endl;
    cout << minCostMEMO(grid.size() - 1, grid[0].size() - 1, grid, dp) << endl;

    cout << minCostTABU(grid.size() - 1, grid[0].size() - 1, grid, dp) << endl;
    return 0;
}