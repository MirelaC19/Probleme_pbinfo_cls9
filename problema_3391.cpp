/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 11:56:12
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 12:27:47
 * @ Description: https://www.pbinfo.ro/probleme/3391/sirmaxim
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("sirmaxim.in");
ofstream out("sirmaxim.out");

int main(void)
{
    int n, cnt = 0, max = 0;

    in >> n;
    
    int a[n];

    for (int i = 0; i < n; i++)
    {
        in >> a[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int i = n / 2; i < n; i++)
    {
        if (a[i] == max)
        {
            cnt++;
        }
    }

    out << cnt << endl;
}