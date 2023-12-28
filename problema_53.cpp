/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:10:48
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:12:19
 * @ Description: https://www.pbinfo.ro/probleme/53/cateimpare
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, nr = 0;
    do
    {
        cin >> n;
        if (n % 2 != 0)
        {
            nr++;
        }
    } while (n != 0);
    cout << nr << endl;
    return 0;
}