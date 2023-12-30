/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:56:28
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:58:01
 * @ Description: https://www.pbinfo.ro/probleme/974/resturi
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, k, s = 0;

    cin >> n >> k;

    for (int i = 1; i < n + 1; i++)
    {
        s += i % k;
    }

    cout << s << endl;
}