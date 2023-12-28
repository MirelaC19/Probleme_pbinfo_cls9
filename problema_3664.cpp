/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:06:22
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 20:40:36
 * @ Description: https://www.pbinfo.ro/probleme/3664/cifparcifimp
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, p = 0, i = 0, a;
    
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> a;
        if (a == 0)
        {
            p = p + 1;
        }
        while (a != 0)
        {
            if ((a % 10) % 2 == 0)
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