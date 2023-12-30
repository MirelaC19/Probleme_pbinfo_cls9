/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 18:00:24
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 18:10:18
 * @ Description: https://www.pbinfo.ro/probleme/1320/ordonat-neordonat
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, c = 0, cr = 0, sc = 0, d = 0, sd = 0, ne = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
        }
        else if (a[i] <= a[i + 1])
        {
            cr++;
        }
        else if (a[i] < a[i + 1])
        {
            sc++;
        }
        else if (a[i] >= a[i + 1])
        {
            d++;
        }
        else if (a[i] > a[i + 1])
        {
            sd++;
        }
        else
        {
            ne++;
        }
    }

    if (c == n - 1)
    {
        cout << "sir constant" << endl;
    }
    if (cr == n - 1 && c > 0)
    {
        cout << "sir crescator" << endl;
    }
    if (sc == n - 1 )
    {
        cout << "sir strict crescator" << endl;
    }
    if (d == n - 1)
    {
        cout << "sir descrescator" << endl;
    }
    if (sd == n - 1)
    {
        cout << "sir strict descrescator" << endl;
    }
    if (ne == n - 1)
    {
        cout << "sir neordonat" << endl;
    }
}