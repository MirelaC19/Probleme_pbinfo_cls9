/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-10 12:35:01
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-10 13:23:24
 * @ Description:https://www.pbinfo.ro/probleme/238/zone
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("zone.in");
ofstream out("zone.out");

int main (void)
{
    int n;

    in >> n;
    
    int a[3 * n];

    for (int i = 0; i < 3 * n; i++)
    {
        in >> a[i];
    }
    int pozpar = -1, pozimpar = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            pozpar = i;
            break;
        }
    }
    for (int i = 3 * n - 1; i >= n * 2; i--)
    {
        if (a[i] % 2 != 0)
        {
            pozimpar = i;
            break;
        }
    }
    if (pozpar != -1 && pozimpar != -1)
    {
        int tmp = a[pozpar];
        a[pozpar] = a[pozimpar];
        a[pozimpar] = tmp;
    }
    for (int i = 0; i < n * 3; i++)
    {
        out << a[i] << " ";
    }
    return 0;
}