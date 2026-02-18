#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> triplets(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, 2, 3};
    int n = arr.size();
    vector<vector<int>> ans = triplets(arr, n);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}