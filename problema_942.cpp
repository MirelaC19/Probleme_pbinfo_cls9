/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:32:16
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-06 13:10:21
 * @ Description: https://www.pbinfo.ro/probleme/942/cifre23
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0;
    long long n = 0LL;

    cin >> n;

    while (n != 0)
    {
        if (n % 10 == 2)
        {
            a++;
        }
        if (n % 10 == 3)
        {
            b++;
        }
        n = n / 10;
    }

    if (a > b)
    {
        cout << 2 << endl;
    }
    else if (a < b)
    {
        cout << 3 << endl;
    }
    else if (a == b)
    {
        cout << 2 << " " << 3 << endl;
    }
}