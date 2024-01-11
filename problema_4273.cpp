/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:40:22
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:43:11
 * @ Description: https://www.pbinfo.ro/probleme/4273/prodpp
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, i = 1;
    long long p = 1LL;

    cin >> n;

    while (n != 0)
    {
        p = p * i * i;
        i++;
        n--;
    }

    cout << p << endl;
}