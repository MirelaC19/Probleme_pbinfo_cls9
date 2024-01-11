/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:29:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:30:34
 * @ Description: https://www.pbinfo.ro/probleme/456/piramida1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    char c;

    cin >> n >> c;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}