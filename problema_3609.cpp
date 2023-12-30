/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:03:21
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 19:27:15
 * @ Description: https://www.pbinfo.ro/probleme/3609/countmod10
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, m, cnt = 0;

    cin >> n >> m;
    if (n % 10 != 0)
    {
        n = n + (10 - n % 10);
    }
    if (n > m)
    {
        cout << 0 << endl;
        return 0;
    }
    if (m % 10 != 0)
    {
        m = m - m % 10;
    }
    cnt = m / 10 - n / 10 + 1;
    cout << cnt << endl;
}