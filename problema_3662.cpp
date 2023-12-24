/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 11:53:46
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 12:00:12
 * @ Description: https://www.pbinfo.ro/probleme/3662/sumcifnrcif
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, s = 0, ca;

    cin >> a;
    ca = a;
    while (a != 0)
    {
        ca = a % 10;
        s = s + ca;
        a = a / 10;
    }
    int cnt = 0;
    while (s != 0)
    {
        s = s / 10;
        cnt++;
    }
    cout << cnt << endl;
}