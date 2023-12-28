/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 17:01:26
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 20:10:02
 * @ Description: https://www.pbinfo.ro/probleme/107/aparitii
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cf, nr = 0;

    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    cf = n % 10;
    while (n != 0)
    {
        if (n % 10 == cf)
        {
            nr++;
        }
        n = n / 10;
    }
    cout << nr << endl;
    return 0;
}