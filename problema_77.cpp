/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:11:28
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 19:54:15
 * @ Description: https://www.pbinfo.ro/probleme/77/ultimacifrapara
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, ca;

    cin >> a;

    if (a == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    while(a != 0)
    {
        ca = a % 10;
        if (ca % 2 == 0)
        {
            cout << ca << endl;
            return 0;
        }
        a = a / 10;
    }
    cout << -1 << endl;
    
    return 0;
}