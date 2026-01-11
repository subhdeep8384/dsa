#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<vector<int>> combinationalSum2(int ind, int target, vector<int> &ds, vector<int> &arr)
{
    vector<vector<int>> ans;
    if (target == 0)
    {
        ans.push_back(ds);
        return ans;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;

        ds.push_back(arr[i]);
        vector<vector<int>> sub = combinationalSum2(i + 1, target - arr[i], ds, arr);
        for (auto &s : sub)
            ans.push_back(s);
        ds.pop_back();
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, 1, 1, 2, 2};
    int target = 4;
    vector<int> ds;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    ans =  combinationalSum2(0, target, ds, arr);
   for (auto it : ans) {
    for (auto i : it) cout << i << "  ";
    cout << endl;
}
    return 0 ;
}