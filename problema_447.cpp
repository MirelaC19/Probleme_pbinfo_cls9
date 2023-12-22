/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:53:40
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:59:27
 * @ Description: https://www.pbinfo.ro/probleme/447/cifmid
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, max = 0, min, a, b, c;

    cin >> n;
    min = n;
    c = n % 10;
    b = (n / 10) % 10;
    a = n / 100;
    if (max < a)
    {
        max = a;
    }
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (min > a)
    {
        min = a;
    }
    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (a > min && a < max)
    {
        cout << a;
    }
    if (b > min && b < max)
    {
        cout << b;
    }
    if (c > min && c < max)
    {
        cout << c;
    }

    return 0;
}