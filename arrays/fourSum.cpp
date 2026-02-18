#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// vector<vector<int>> fourSum(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {

//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             unordered_set<int> st;
//             for (int k = j + 1; k < nums.size(); k++)
//             {
//                 int target = -(nums[i] + nums[j] + nums[k]);
//                 if (st.find(target) != st.end())
//                 {
//                     vector<int> temp = {nums[i], nums[j], nums[k], target};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 st.insert(nums[k]);
//             }
//         }
//         for (auto it : st)
//         {
//             ans.push_back(it);
//         }
//     }
//     return ans;
// }

vector<vector<int>> fourSumOptimal(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int k = j + 1;
            int l = nums.size() - 1;
            while (k < l)
            {
                int target = nums[i] + nums[j] + nums[k];
                target += nums[l];

                if (target > 0)
                {
                    l--;
                }
                else if (target < 0)
                {
                    k++;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
            }
        }
    }
    return ans;
}
int main() {}