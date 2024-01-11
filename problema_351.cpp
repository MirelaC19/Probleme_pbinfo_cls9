/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 11:44:54
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:27:27
 * @ Description: https://www.pbinfo.ro/probleme/351/piramida
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}