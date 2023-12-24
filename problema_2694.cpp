/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 20:00:44
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-23 18:01:59
 * @ Description: https://www.pbinfo.ro/probleme/2694/minmax2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, max1, max2, min1, min2, n1, n2, ca, cb;

    cin >> a >> b;
    ca = a;
    cb = b;
    max1 = a % 10;
    max2 = b % 10;
    min1 = a % 10;
    min2 = b % 10;
    a = a / 10;
    b = b / 10;
    while (a != 0 && b != 0)
    {
        if (max1 < a % 10)
            max1 = a % 10;
        if (min1 > a % 10)
            min1 = a % 10;
        if (max2 < b % 10)
            max2 = b % 10;
        if (min2 > b % 10)
            min2 = b % 10;
        a = a / 10;
        b = b / 10;
    }
    n1 = (max1 > max2) ? max1 * 10 + max2 : max2 * 10 + max1;
    if (min1 == 0 && min2 != 0)
    {
        n2 = min2 * 10 + min1;
        int n22;
        min1 = 9;
        while (ca != 0)
        {
            if (min1 > ca % 10 && ca % 10 != 0)
            {
                min1 = ca % 10;
            }
            ca = ca / 10;
        }
        n22 = min1 * 10 + min2;
        if (n22 < n2)
        {
            n2 = n22;
        }
    }
    else if (min2 == 0 && min1 != 0)
    {
        n2 = min1 * 10 + min2;
        int n22;
        min2 = 9;
        while (cb != 0)
        {
            if (min2 > cb % 10 && cb % 10 != 0)
            {
                min2 = cb % 10;
            }
            cb = cb / 10;
        }
        n22 = min2 * 10 + min1;
        if (n22 < n2)
        {
            n2 = n22;
        }
    }
    else if (min1 == 0 && min2 == 0)
    {
        min1 = 9;
        min2 = 9;
        while (ca != 0 && cb != 0)
        {
            if (min1 > ca % 10 && ca % 10 != 0)
            {
                min1 = ca % 10;
            }
            if (min2 > cb % 10 && cb % 10 != 0)
            {
                min2 = cb % 10;
            }
            ca = ca / 10;
            cb = cb / 10;
        }
        n2 = (min1 < min2) ? min1 * 10 : min2 * 10;
    }
    else
    { 
        n2 = (min1 < min2) ? min1 * 10 + min2 : min2 * 10 + min1;
    }
    
    cout << n1 << " " << n2 << endl;

    return 0;
}