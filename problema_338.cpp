/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 15:13:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 15:15:29
 * @ Description: https://www.pbinfo.ro/probleme/338/expresie5
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + (i * i);
    }
    cout << "Rezultatul este " << s;
    return 0;
}