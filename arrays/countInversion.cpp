#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> countInversion(vector<int> &arr)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                ans.push_back({arr[i], arr[j]});
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> ar = {6, 3, 5, 2, 7};
    vector<vector<int>> arr = countInversion(ar);

    for (auto it : arr)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}