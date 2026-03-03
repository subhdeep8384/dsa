#include <iostream>
#include <set>
using namespace std;

void removeVowel(string &s)
{
    string ans;
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (vowels.find(ch) == vowels.end())
        {
            ans += ch;
        }
    };

    s = ans;
}

int main()
{
    string s = "aeiadsdsafdgfdfghsfthtrfghqwehhgjgkoub";
    removeVowel(s);
    cout << s;
    return 0;
}