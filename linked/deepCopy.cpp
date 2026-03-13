#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    for (auto x : l1)
    {
        cout << x << " ";
    }
}
