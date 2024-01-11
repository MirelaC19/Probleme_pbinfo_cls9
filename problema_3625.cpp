/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:11:27
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 13:22:20
 * @ Description: https://www.pbinfo.ro/probleme/3625/prelucrari-cifre
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cn = 0, a = 0, b = 0, c = 0, d = 0, e = 1, f = 0;

    cin >> n;

    cn = n;
    while (cn != 0)
    {
        a += (cn % 10) * (cn % 10);
        cn = cn / 10;
    }

    cn = n;
    while (cn != 0)
    {
        if ((cn % 10) % 2 != 0)
        {
            b+= cn % 10;
        }
        cn = cn / 10;
    }

    cn = n;
    while (cn != 0)
    {
        if ((cn % 10) % 3 == 0)
        {
            c += cn % 10;
        }
        cn = cn / 10;
    }

    cn = n;
    while (cn != 0)
    {
        if (cn % 10 > 5)
        {
            d++;
        }
        cn = cn / 10;
    }

    cn = n;
    while (cn != 0)
    {
        if ((cn % 10) != 0)
        {
            e = e * (cn % 10);
        }
        cn = cn / 10;
    }

    int cnt = 0;
    cn = n;
    while (cn != 0)
    {
        cn = cn / 10;
        cnt++;
    }
    int nr = 1;
    while (cnt != 1)
    {
        nr = nr * 10;
        cnt--;
    }
    
    cn = n % 10;
    f = (n / nr) + cn;


    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
}