/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 11:44:54
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 11:51:31
 * @ Description: https://www.pbinfo.ro/probleme/351/piramida
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a = 0, b = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        b++;
        a = 1;
        while (a == b + 1)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}