/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 15:54:11
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 15:55:53
 * @ Description: https://www.pbinfo.ro/probleme/336/expresie4
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, i = 1, s = 0;

    cin >> n;

    while (n != 0)
    {
        s = n * i + s;
        n--;
        i++;
    }
    cout << "Rezultatul este " << s << endl;

    return 0;
}