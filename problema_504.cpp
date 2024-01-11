/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:51:12
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 13:54:39
 * @ Description: https://www.pbinfo.ro/probleme/504/interval3
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i] >= a[0] && a[i] <= a[n - 1]) || (a[i] <= a[0] && a[i] >= a[n - 1]))
        {
            cnt++;
        }
    }

    if (cnt == n - 2)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}