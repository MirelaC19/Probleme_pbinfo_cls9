/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 18:11:17
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 18:12:46
 * @ Description:
 */

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, ok = 0;
    
    cin >> n;

    int a[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = 1;
    j = n;
    while (i < j)
    {
        if ((a[i] % 2) != (a[j] % 2))
        {
            ok++;
        }
        i++;
        j--;
    }
    if (ok == 0)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }

    return 0;
}