/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:14:19
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:16:54
 * @ Description: https://www.pbinfo.ro/probleme/793/sumprod
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