/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:49:12
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:58:11
 * @ Description: https://www.pbinfo.ro/probleme/4314/cifre16
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n, cf = 0, cn, nr = 0;

    cin >> n;
    cn = n;
    while (cn != 0)
    {
        cn = cn / 10;
        cf++;
    }
    cn = n;
    cf = pow(10, cf - 1);
    while (n != 0)
    {
        if (n % 10 < cn / cf)
        {
            nr++;
        }
        n = n / 10;
    }

    cout << nr << endl;

    return 0;
}