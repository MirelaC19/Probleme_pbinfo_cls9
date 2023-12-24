/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:06:22
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 12:10:17
 * @ Description: https://www.pbinfo.ro/probleme/3664/cifparcifimp
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, p = 0, i = 0, a, ca;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        ca = a;
        while (a != 0)
        {
            ca = a % 10;
            if (ca % 2 == 0)
            {
                p = p + 1;
            }
            else
            {
                i = i + 1;
            }
            a = a / 10;
        }
    }
    cout << p << " " << i << endl;

    return 0;
}