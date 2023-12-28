/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 15:57:23
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:00:08
 * @ Description: https://www.pbinfo.ro/probleme/4523/afisfactoriale
 */

#include <iostream>

using namespace std;

int main(void)
{
    long long int n, i = 1, s = 1;

    cin >> n;

    while (i != n + 1)
    {
        s = s * i;
        cout << s << " ";
        i++;
    }
    return 0;
}