/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:17:47
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:20:41
 * @ Description: https://www.pbinfo.ro/probleme/4547/sumcnt3
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, k, a, nr = 0, s = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % k == 0)
        {
            s = s + a;
        }
        if (a % 2 == 0)
        {
            nr++;
        }
    }
    cout << s << " " << nr << endl;
} 