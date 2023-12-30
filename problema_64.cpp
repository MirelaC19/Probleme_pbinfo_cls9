/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 17:46:04
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 17:51:21
 * @ Description: https://www.pbinfo.ro/probleme/64/numarperfect
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 1;
    long long s = 1LL;

    cin >> n;
    if (n == 1)
    {
        s = 1;
    }
    else
    {
        s += n;
    }

    nr = n * 2;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (n / i == i) ? 0 : n / i;
            s += i;
        }
    }
    if (nr == s)
    {
        cout << n << " este perfect" << endl;
    }
    else
    {
        cout << n << " nu este perfect" << endl;
    }
}