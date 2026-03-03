#include <iostream>
#include <map>
using namespace std;

bool areAnagram(string s1, string s2)
{
    map<char, int> mpp;
    for (int i = 0; i < s1.length(); i++)
    {
        mpp[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        mpp[s2[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second % 2 != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "a";
    string s2 = "abb";
    cout << areAnagram(s1, s2);
    return 0;
}