/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-29 18:19:30
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-29 18:26:45
 * @ Description: https://www.pbinfo.ro/probleme/3663/ppdp
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a = 0;

    cin >> n;

    for (int i = 2; i * i <= n && a == 0; i++)
    {
        if (n % i == 0)
        {
            a = i;
        }
    }

    cout << a * a << endl;
}