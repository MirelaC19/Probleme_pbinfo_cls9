/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 12:45:15
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 13:02:00
 * @ Description: https://www.pbinfo.ro/probleme/14/primalitate
 */

#include <iostream>

using namespace std;

int prim(int n);

int main(void)
{
    int n;

    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if (prim(i) == 1)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}

int prim(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n == 2 || n == 3)
    {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}