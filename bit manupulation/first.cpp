#include <iostream>
#include <algorithm>
using namespace std;

string binaryConversion(int number)
{
    string res = "";
    if (number == 0)
    {
        return "0";
    }

    while (number > 0)
    {
        if (number % 2 == 1)
        {
            res += "1";
        }
        else
        {
            res += "0";
        }
        number = number / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int decimalConversion(string binNumber)
{
    int powerOf2 = 0;
    int number = 0;
    int length = binNumber.length();
    for (int i = length - 1; i >= 0; i--)
    {
        if (binNumber[i] == '1')
        {
            number = number + (1 << powerOf2);
        }
        powerOf2++;
    }

    return number;
}

int main()
{
    int number = 13;
    cout << binaryConversion(number) << endl;
    cout << decimalConversion(binaryConversion(number)) << endl;
}