/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-10 12:35:01
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-10 12:56:30
 * @ Description:https://www.pbinfo.ro/probleme/248/pozitie
 */

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream in("pozitie.in");
ofstream out("pozitie.out");

int main (void)
{
    int n;

    in >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        in >> a[i];
    }
    int o = a[0];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == o)
        {
            out << i + 1;
        }
    }
    return 0;
}

