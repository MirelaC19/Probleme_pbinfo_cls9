/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-23 18:04:42
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 15:08:29
 * @ Description: https://www.pbinfo.ro/probleme/1212/sumapatrate
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long a, b, c, s;
    const int C = 10234573;

    cin >> n;
    a = n;
    b = n + 1;
    c = 1 + 2 * (long long)n;
    if (a % 2 == 0)
    {
        a = a / 2;
    }
    else
    {
        b = b / 2;
    }
    if (a % 3 == 0)
    {
        a = a / 3;
    }
    else if (b % 3 == 0)
    {
        b = b / 3;
    }
    else
    {
        c = c / 3;
    }
    s = (((a % C) * (b % C)) % C * (c % C)) % C;
    cout << s << endl;

    return 0;
}