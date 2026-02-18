vector<vector<int>> fourSum(vector<int> &nums)
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