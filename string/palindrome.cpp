#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    int last = s.length() - 1;
    int start = 0;

    while (start < last)
    {
        if (s[start] != s[last])
        {
            return false;
        }
        else
        {
            start++;
            last--;
        }
    }
    return true;
}

int main()
{
    string s = "madam";
    cout << isPalindrome(s);
    return 0;
}