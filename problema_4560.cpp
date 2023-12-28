/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 12:12:23
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 12:42:05
 * @ Description: https://www.pbinfo.ro/probleme/4560/suma3cifre
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0;

    do
    {
        cin >> n;
        if ((n > 99 && n < 1000) && (n % 10 == n / 100))
        {
            s = s + n;
        }
    } while (n != 0);
    cout << s << endl;

    return 0;
}