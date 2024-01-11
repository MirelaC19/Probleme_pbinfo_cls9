/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 12:53:45
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 13:09:17
 * @ Description: https://www.pbinfo.ro/probleme/4221/bune
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, max1 = 0, max2 = 0, min1, min2;

    cin >> a >> b;
    min1 = a;
    min2 = b;

    while (a != 0)
    {
        if (a % 10 > max1)
        {
            max1 = a % 10;
        }
        if (a % 10 < min1)
        {
            min1 = a % 10;
        }
        a = a / 10;
    }
    while (b != 0)
    {
        if (b % 10 > max2)
        {
            max2 = b % 10;
        }
        if (b % 10 < min2)
        {
            min2 = b % 10;
        }
        b = b / 10;
    }

    if (max1 == min2)
    {
        cout << max1 << endl;
    }
    else if (min1 == max2)
    {
        cout << min1 << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}