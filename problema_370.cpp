/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 13:33:15
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 13:37:18
 * @ Description: https://www.pbinfo.ro/probleme/370/sumdivk
 */

#include <iostream>

using namespace std;

int main(void)
{
    int k, n, a, s = 0, cf = 0, ca = 0;
    
    cin >> k >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ca = a;
        while (ca != 0)
        {
            cf += ca % 10;
            ca = ca / 10;
        }
        if (cf % k == 0)
        {
            s += a;
        }
    }
    cout << s << endl;
    return 0;
}