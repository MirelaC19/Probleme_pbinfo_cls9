/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-05 19:41:39
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-06 12:41:31
 * @ Description: https://www.pbinfo.ro/probleme/44/primeinterval
 */

#include <iostream>

using namespace std;

bool is_prim(int n);

int main(void)
{
    int a, b, cnt = 0;

    cin >> a >> b;

    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        if (is_prim(i) == true)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}