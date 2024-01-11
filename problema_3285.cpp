/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 11:51:19
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 11:53:47
 * @ Description: https://www.pbinfo.ro/probleme/3285/moscraciun
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, max = 0, cnt = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = n / 2; i < n; i++)
    {
        if (a[i] > max)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}