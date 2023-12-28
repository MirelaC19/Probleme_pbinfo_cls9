/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 19:22:50
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 19:25:53
 * @ Description: https://www.pbinfo.ro/probleme/326/ultimulpar
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, o = 0;

    cin >> n;

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << endl;
            o = 1;
            break;
        }
    }
    if (o == 0)
    {
        cout << "IMPOSIBIL" << endl;
    }
    return 0;
}