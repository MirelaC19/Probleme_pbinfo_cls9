/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:49:29
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:51:19
 * @ Description: https://www.pbinfo.ro/probleme/943/suma4
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    long long s = 0LL;

    cin >> n;

    for (int i = 1; i < n + 1; i++)
    {
        s += pow(i, 4);
    }

    cout << s % 10 << endl;
}