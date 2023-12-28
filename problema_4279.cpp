/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:14:50
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:16:37
 * @ Description: https://www.pbinfo.ro/probleme/4279/sumcnt2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, k, a, s = 0, nr = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 != 0)
        {
            s = s + a;
        }
        if (a % k == 0)
        {
            nr++;
        }
    }
    cout << s << " " << nr << endl;

    return 0;
}