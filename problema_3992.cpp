/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:04:51
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:06:05
 * @ Description: https://www.pbinfo.ro/probleme/3992/count-c2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a, nr = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 9 && a < 100)
        {
            nr++;
        }
    }
    cout << nr << endl;

    return 0;
}