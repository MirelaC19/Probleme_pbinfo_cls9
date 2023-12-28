/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:30:12
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:35:44
 * @ Description: https://www.pbinfo.ro/probleme/3933/zero-unu
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, o = 0, m = 0, k = 0;

    cin >> n;

    while (n != 0)
    {
        if (n % 10 == 0)
        {
            o++;
        }
        if (n % 10 == 0)
        {
            m++;
        }
        if (n % 10 != 0 && n % 10 != 1)
        {
            k++;
        }
        n = n / 10;
    }
    if (k == 0 && o > 0 && m > 0)
    {
        cout << "da" << endl;
    }
    else
    {
        cout << "nu" << endl;
    }
    return 0;
}