/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-05 19:12:20
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-05 19:27:13
 * @ Description: https://www.pbinfo.ro/probleme/3350/prime2
 */

#include <iostream>

bool is_prim(int n);

using namespace std;

int main(void)
{
    int n, a, cnt = 0;

    cin >> n;
    while (n != 0)
    {
        cin >> a;
        if (is_prim(a) == true)
        {
            cnt++;
        }
        n--;
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