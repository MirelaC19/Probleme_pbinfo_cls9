/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:00:20
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:02:14
 * @ Description: https://www.pbinfo.ro/probleme/2200/uppercase
 */

#include <iostream>

using namespace std;

int main(void)
{
    char n;

    cin >> n;

    if (n + 0 > 96)
    {
        n = n - 32;
    }
    cout << n << endl;
}