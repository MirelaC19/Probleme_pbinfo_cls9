/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 13:35:34
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 13:51:21
 * @ Description: https://www.pbinfo.ro/probleme/119/2maxim
 */

#include <iostream>

using namespace std;

int main()
{
    int n, max1 = -1, max2 = -1;

    cin >> n;
    int nr;
    for (int i = 0; i < n; i++)
    {
        cin >> nr;
        if (nr > max1)
        {
            max2 = max1;
            max1 = nr;
        }
        else if (nr > max2)
        {
            max2 = nr;
        }
    }
    
    cout << max1 << " " << max2 << endl;

    return 0;
}