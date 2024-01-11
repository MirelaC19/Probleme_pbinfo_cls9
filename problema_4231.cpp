/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-10 10:58:43
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 11:01:52
 * @ Description: https://www.pbinfo.ro/probleme/4231/mingx
 */

#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    int x, min;

    cin >> n >> x;
    min = n;

    while (n != 0)
    {
        if (n % 10 > x && n % 10 < min)
        {
            min = n % 10;
        }
        n = n / 10;
    }

    if (min == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << min << endl;
}