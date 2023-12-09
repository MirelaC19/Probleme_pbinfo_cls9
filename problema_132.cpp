/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-09 16:23:06
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-09 16:43:36
 * @ Description: ElemPP
 */

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool este_pp(int n);

ifstream in("elempp.in");
ofstream out("elempp.out");

int main (void)
{
    int n;

    in >> n;

    if (n <= 0)
    {
        return 1;
    }

    int a[n];

    for (int i = 0; i < n; i++)
    {
        in >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (este_pp(a[i]))
        {
            out << a[i] << " ";
        }
    }
    return 0;
}

bool este_pp(int n)
{
    int nr_cifre = log10(n) + 1;
    int pp = n / pow(10, nr_cifre - 2);
    int p = sqrt(pp);
    if (pp == p * p)
    {
        return true;
    }
    return false;
}
