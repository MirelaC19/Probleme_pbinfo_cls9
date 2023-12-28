/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:14:00
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:21:06
 * @ Description: https://www.pbinfo.ro/probleme/339/numere
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a, o = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            cout << a << endl;
            o = 1;
            break;
        }
    }
    if (o == 0)
    {
    cout << "IMPOSIBIL" << endl;
    }
    return 0;
}