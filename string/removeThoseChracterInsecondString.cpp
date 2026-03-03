#include <iostream>
#include <set>
using namespace std;

void removeThoseCharacter(string s1, string s2)
{
    set<char> st;
    string ans = "";
    for (int i = 0; i < s2.length(); i++)
    {
        st.insert(s2[i]);
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (st.find(s1[i]) == st.end())
        {
            ans += s1[i];
        }
    }
    cout << ans;
}

int main()
{
    string s1 = "computer";
    string s2 = "catu";
    removeThoseCharacter(s1, s2);
    return 0;
}