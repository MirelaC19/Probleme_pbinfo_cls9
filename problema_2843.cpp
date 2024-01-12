/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-12 21:04:37
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-12 21:24:33
 * @ Description: https://www.pbinfo.ro/probleme/2843/puteri6
 */

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream in("puteri6.in");
ofstream out("puteri6.out");

int main(void)
{
    int n;
    long long p = 0LL;
    int a[10] = {0};

    in >> n;

    while (in >> p)
    {
        a[(int)log10(p)] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cnt += a[i];
        if (n <= cnt)
        {
            out << pow(10, i);
            return 0;
        }
    }

    out << "Nu exista";

    return 0;
}