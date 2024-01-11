/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 19:22:36
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-05 18:01:45
 * @ Description: https://www.pbinfo.ro/probleme/2599/a16
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, i = 16;
    long long p = 1LL;

    cin >> a;
    while (i != 0)
    {
        p = p * a;
        i--;
    }

    cout << p << endl;
}