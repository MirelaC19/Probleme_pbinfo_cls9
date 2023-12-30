/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 15:34:36
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 15:54:58
 * @ Description: https://www.pbinfo.ro/probleme/376/suma-divizori
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long int s = 0LL;

    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        s = 1LL + n;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (n / i == i) ? 0 : n / i;
            s += i;
        }
    }
    cout << s << endl;
    return 0;
}