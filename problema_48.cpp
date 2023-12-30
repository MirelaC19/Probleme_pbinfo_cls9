/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 12:52:33
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 12:55:21
 * @ Description: https://www.pbinfo.ro/probleme/48/sumapatrate1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long s = 0LL;

    cin >> n;

    for (int i = 1; i * i <= n; i++)
    {
        s += i * i;
    }

    cout << "Rezultatul este " << s << endl;
}