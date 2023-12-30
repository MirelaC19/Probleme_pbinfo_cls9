/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 17:53:09
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 17:56:15
 * @ Description: https://www.pbinfo.ro/probleme/445/pseudoperfect
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
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
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += (n / i == i) ? 0 : n / i;
            s += i; 
        }
    }
    if (s % n == 0)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}