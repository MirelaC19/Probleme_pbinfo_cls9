/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:18:02
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:18:07
 * @ Description: https://www.pbinfo.ro/probleme/4506/sumprod1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, max = 0;

    cin >> a >> b >> c;

    if ((a * b + c) > max)
    {
        max = a * b + c;
    }
    if ((a * c + b) > max)
    {
        max = a * c + b;
    }
    if ((b * c + a) > max)
    {
        max = b * c + a;
    }

    cout << max << endl;
}