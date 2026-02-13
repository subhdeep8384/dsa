#include <iostream>
#include <vector>
using namespace std;

vector<int> printRowOfPascalTriangle(int row)
{
    vector<int> ans(row, -1);
    int first = 1;
    ans[0] = first;
    for (int i = 1; i < row; i++)
    {
        first = first * (row - i) / (i);
        ans[i] = first;
    }

    return ans;
}

vector<vector<int>> pascalTrinagle(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        long long first = 1;
        vector<int> temp(i + 1, -1);
        temp[0] = first;

        for (int j = 1; j <= i; j++)
        {
            first = first * (i - j + 1) / (j);
            temp[j] = first;
        }
        ans.push_back(temp);
    }
    return ans;
}

int ncr(int n, int r)
{
    int result = 1;
    for (int i = 0; i < r; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

vector<vector<int>> optimalPascalTriangle(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> temp(i + 1, -1);
        temp[0] = 1;
        for (int j = 1; j <= i; j++)
        {
            temp[j] = ncr(i, j);
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    int rows = 10;
    vector<vector<int>> ans = optimalPascalTriangle(rows);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}