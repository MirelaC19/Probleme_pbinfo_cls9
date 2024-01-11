/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-05 18:22:41
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-05 18:46:15
 * @ Description: https://www.pbinfo.ro/probleme/246/ultimeleimpare
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a = 0, b = 0, m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 2 != 0)
        {
            b = a;
            a = m;
        }
    }
    if (b == 0)
    {
        cout << "Numere insuficiente" << endl;
        return 0;
    }
    cout << b << " " << a << endl;
}