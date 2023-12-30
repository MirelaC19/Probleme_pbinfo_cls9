/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 17:55:15
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 17:59:11
 * @ Description: https://www.pbinfo.ro/probleme/500/verificareordonat
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, ok = 0;

    cin >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            ok++;
        }
    }
    if (ok == n - 1)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}