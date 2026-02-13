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

int merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    int count = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            count += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[st + i] = temp[i];
    }
    return count;
}

int mergesort(vector<int> &arr, int st, int end)
{
    if (st >= end)
        return 0;
    int mid = st + (end - st) / 2;
    int leftInversionCount = mergesort(arr, st, mid);
    int rightInversionCount = mergesort(arr, mid + 1, end);
    int inversionCount = merge(arr, st, mid, end);
    return inversionCount + leftInversionCount + rightInversionCount;
}

int countInversionByMergeSort(vector<int> &arr)
{
    int ans = mergesort(arr, 0, arr.size() - 1);
    return ans;
}

int main()
{
    vector<int> ar = {6, 3, 5, 2, 7};
    int ans = countInversionByMergeSort(ar);

    cout << ans << endl;

    return 0;
}