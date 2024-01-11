/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:40:45
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 13:43:54
 * @ Description: https://www.pbinfo.ro/probleme/118/cifre2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn, a = 0, s = 0;

    cin >> n;
    cn = n;

    while (cn != 0)
    {
        a++;
        cn = cn / 10;
    }

    cn = a - 2;
    int nr = 1;
    while (cn != 0)
    {
        nr = nr * 10;
        cn--;
    }

    n = n / nr;

    while (n != 0)
    {
        s += n % 10;
        n = n / 10;
    }

    cout << s << endl;
}