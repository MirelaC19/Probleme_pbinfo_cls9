/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:06:53
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:09:11
 * @ Description: https://www.pbinfo.ro/probleme/52/sumapare1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0;

    do
    {
        cin >> n;
        if (n % 2 == 0)
        {
            s = s + n;
        }
    } while (n != 0);
    cout << s << endl;
    return 0;
}