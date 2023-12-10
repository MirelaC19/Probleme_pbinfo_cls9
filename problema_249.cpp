/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-10 12:35:01
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-10 13:11:07
 * @ Description:https://www.pbinfo.ro/probleme/249/pozitiex
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("pozitiex.in");
ofstream out("pozitiex.out");

int main (void)
{
    int x, n;

    in >> x >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        in >> a[i];
    }
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            ok++;
        }
    }
    if (ok == 0)
    {
        out << "NU EXISTA";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int min = a[i];
        int poz = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                poz = j;
            }
        }
        int tmp = a[i];
        a[i] = min;
        a[poz] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            out << i + 1;
        }
    }
    return 0;
}