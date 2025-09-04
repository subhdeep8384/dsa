#include <iostream>
#include <vector>

using namespace std;

int frogJump(vector<int> arr)
{
    int n = arr.size();
    int maxInt = 0;

    for (int i = 0; i < n; i++)
    {
       if( i > maxInt ) return -1 ;
       maxInt = max(maxInt , i + arr[i] ) ;
    }
    return 1;
}

int main() {
    vector<int> arr = {2, 1, 4, 0, 4};
    int result = frogJump(arr);
    cout << result;
    return 0;
}