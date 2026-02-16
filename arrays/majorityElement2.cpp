#include <iostream>
#include <vector>

using namespace std;

vector<int> majorityElement(vector<int> &arr)
{
    int cnt1 = 0, cnt2 = 0, el1 = INT16_MIN, el2 = INT16_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt1 == 0 && arr[i] != el2)
        {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if (cnt2 == 0 && arr[i] != el1)
        {
            el2 = arr[i];
            cnt2 = 1;
        }
        else if (arr[i] == el1)
        {
            cnt1++;
        }
        else if (arr[i] == el2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == el1)
        {
            cnt1++;
        }
        if (el2 == arr[i])
        {
            cnt2++;
        }
    }
    vector<int> ans;
    if (cnt1 > int((arr.size() / 3) + 1))
    {
        ans.push_back(el1);
    }
    if (cnt2 > int((arr.size() / 3) + 1))
    {
        ans.push_back(el2);
    }
    return ans;
}
int main() {}