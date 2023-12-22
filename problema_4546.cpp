/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 12:28:00
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 13:05:19
 * @ Description: ProdusMaxime
 */

#include <iostream>

using namespace std;

int main()
{
    int n, max1 = 0, max2 = 0;

    do
    {
        cin >> n;
        if (n != 0)
        {
            if (n > max1)
            {
                max2 = max1;
                max1 = n;
            }
            else if (n < max1 && n > max2)
            {
                max2 = n;
            }
        }
    } while (n != 0);
    if (max2 == 0)
    {
        cout << "NU EXISTA" << endl;
        return 0;
    }
    
    cout << (long long int)(max1) * max2 << endl;

    return 0;
}