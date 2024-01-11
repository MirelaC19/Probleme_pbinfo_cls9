/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-10 10:16:46
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 10:39:49
 * @ Description: https://www.pbinfo.ro/probleme/4455/numarare8
 */

#include <iostream>
#include <fstream>

using namespace std;

bool is_prim(int n);

ifstream in("numarare8.in");
ofstream out("numarare8.out");

int main(void)
{
    int a[1000] = {0};

    int n, b, cnt = 0;

    in >> n;

    for (int i = 0; i < n; i++)
    {
        in >> b;
        a[b]++;
    }

    for (int i = 100; i < 1000; i++)
    {
        if (is_prim(i) == true && a[i] == 0)
        {
            cnt++;
        }
    }

    out << cnt;
}

bool is_prim(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0 || n < 2)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}