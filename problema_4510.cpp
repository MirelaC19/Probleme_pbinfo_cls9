/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:28:55
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:32:32
 * @ Description: https://www.pbinfo.ro/probleme/4510/paritate-9
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, s = 0, p = 1;

    cin >> a >> b;

    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
    {
        s = (a % 10) + (a / 10) + (b % 10) + (b / 10);
        cout << s;
    }
    else
    {
        p = (a % 10) * (a / 10) * (b % 10) * (b / 10);
        cout << p;
    }
}