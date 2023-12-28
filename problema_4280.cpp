/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:23:05
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:26:00
 * @ Description: https://www.pbinfo.ro/probleme/4280/maxdivk
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, k, a, max = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % k == 0 && max < a)
        {
            max = a;
        }
    }
    if (max == 0)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << max << endl;

    return 0;
}