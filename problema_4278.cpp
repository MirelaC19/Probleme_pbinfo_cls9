/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:10:39
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:12:40
 * @ Description: https://www.pbinfo.ro/probleme/4278/sumcnt1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0, nr = 0;
    
    do
    {
        cin >> n;
        if (n % 2 == 0)
        {
            s = n + s;
        }
        if (n > 9 && n < 100)
        {
            nr++;
        }
    } while (n != 0);
    
    cout << s << " " << nr << endl;
    return 0;
}