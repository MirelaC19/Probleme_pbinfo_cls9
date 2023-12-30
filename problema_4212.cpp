/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 14:04:25
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 14:13:24
 * @ Description: https://www.pbinfo.ro/probleme/4212/inccifpare
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 0, cf = 0, i = 1;

    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    while (n != 0)
    {
        if ((n % 10) % 2 == 0)
        {
            cf = n % 10 + 1;
        }
        else
        {
            cf = n % 10;
        }
        nr = cf * i + nr;
        i = i * 10;
        n = n / 10;
    }
    cout << nr << endl;
}