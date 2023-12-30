/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:59:11
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 14:02:53
 * @ Description: https://www.pbinfo.ro/probleme/340/control
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0, cf;

    cin >> n;
    cf = n;
    while (cf > 9)
    {
        while (n != 0)
        {
            s += n % 10;
            n = n / 10;
        }
        n = s;
        cf = s;
    }

    cout << cf << endl;
}