/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:35:53
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:42:12
 * @ Description: https://www.pbinfo.ro/probleme/3254/prod-pi
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, max = 0, min;

    cin >> n;
    min = n;
    while (n != 0)
    {
        if ((n % 10) % 2 == 0 && max < n % 10)
        {
            max = n % 10;
        }
        if ((n % 10) % 2 != 0 && min > n % 10)
        {
            min = n % 10;
        }
        n = n / 10;
    }

    cout << max * min << endl;
    return 0;
}