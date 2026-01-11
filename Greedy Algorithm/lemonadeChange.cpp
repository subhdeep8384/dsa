#include <bits/stdc++.h>
using namespace std;

bool function1(vector<int> customer)
{
    int n = customer.size();
    int five = 0, ten = 0, twenty = 0;
    for (int i = 0; i < n; i++)
    {
        if (customer[i] == 5)
        {
            five++;
        }
        else if (customer[i] == 10)
        {
            if (five > 0)
            {
                five--;
                ten++;
            }
            else
            {
                return false;
            }
        }
        else if (customer[i] == 20)
        {
            if (ten >= 1 && five > 0)
            {
                twenty++;
                ten--;
                five--;
            }
            else if (five >= 3)
            {
                five -= 3;
                twenty++;
            }
            else{
                return false ;
            }
        }
    }
    return true ;
}


int main()
{
    vector<int> customer = {5, 5, 10, 10, 20};
    bool ans = function1(customer);
    cout << ans;
}