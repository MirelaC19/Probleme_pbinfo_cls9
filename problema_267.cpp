/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-10 10:08:58
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 10:13:56
 * @ Description: https://www.pbinfo.ro/probleme/267/unice
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("unice.in");
ofstream out("unice.out");

int main(void)
{
    int a[100] = {0};

    int n, b;

    in >> n;
    for (int i = 0; i < n; i++)
    {
        in >> b;
        a[b]++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (a[i] == 1)
        {
            out << i << " ";
        }
    }
}