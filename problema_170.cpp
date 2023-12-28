/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:44:24
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:46:26
 * @ Description: https://www.pbinfo.ro/probleme/170/cifmaxmin
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, max = 0, min;

    cin >> n;
    min = n;
    while(n != 0)
    {
        if (n % 10 > max)
        {
            max = n % 10;
        }
        if (n % 10 < min)
        {
            min = n % 10;
        }
        n = n / 10;
    }
    cout << max + min << endl;
    return 0;
}