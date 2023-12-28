/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:01:59
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:03:38
 * @ Description: https://www.pbinfo.ro/probleme/3985/suma-c2
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a, s = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > 9 && a < 100)
        {
            s = s + a;
        }
    }
    cout << s << endl;
    return 0;
}