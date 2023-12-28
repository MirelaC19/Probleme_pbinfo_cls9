/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:37:47
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 20:14:45
 * @ Description: https://www.pbinfo.ro/probleme/121/ciframaxima2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, max = 0, nr = 0;

    cin >> n;
    if (n == 0)
    {
        cout << n << " " << 1 << endl;
        return 0;
    }
    
    while (n != 0)
    {
        if (n % 10 > max)
        {
            max = n % 10;
            nr = 1;
        }
        else if (n % 10 == max)
        {
            nr++;
        }
        n = n / 10;
    }
    cout << max << " " << nr << endl;

    return 0;
}