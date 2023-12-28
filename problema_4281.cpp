/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:26:48
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:29:49
 * @ Description: https://www.pbinfo.ro/probleme/4281/min2cif
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, min = 10000;
    
    do
    {
        cin >> n;
        if ((n > 9 && n < 100) && min > n)
        {
            min = n;
        }
    } while (n != 0);
    if (min == 10000)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << min << endl;
}