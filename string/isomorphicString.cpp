#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s1, string s2)
{
    unordered_map<char, char> s1_s2;
    unordered_map<char, char> s2_s1;
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];
        if (s1_s2.find(c1) == s1_s2.end() && s2_s1.find(c2) == s2_s1.end())
        {
            s1_s2[c1] = c2;
            s2_s1[c2] = c1;
        }
        else
        {
            if (s1_s2[c1] == c2 && s2_s1[c2] == c1)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    cout << "hello world ";
}