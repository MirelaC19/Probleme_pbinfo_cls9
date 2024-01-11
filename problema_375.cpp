/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-05 18:36:58
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-05 19:03:44
 * @ Description: https://www.pbinfo.ro/probleme/375/urmatorul-prim
 */

#include <iostream>

using namespace std;

bool is_prim(int n);

int main(void)
{
    int n;

    cin >> n;

    int i = n + 1;

    while (is_prim(i) == false)
    {
        i++;
    }

    cout << i << endl;
}

bool is_prim(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n < 2 || n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}