/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-10 10:47:37
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 10:50:53
 * @ Description: https://www.pbinfo.ro/probleme/2702/perechisosete
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a[100] = {0};

    int n, b, cnt = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a[b - 1]++;
    }

    for (int i = 0; i < 100; i++)
    {
        cnt = cnt + a[i] / 2;
    }

    cout << cnt << endl;
}