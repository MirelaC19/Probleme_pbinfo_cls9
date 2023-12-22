/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 13:56:40
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 14:07:50
 * @ Description: https://www.pbinfo.ro/probleme/274/3minime
 */

#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
    int n, min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;

    cin >> n;
    int nr;
    for (int i = 0; i < n; i++)
    {
        cin >> nr;
        if (nr < min1)
        {
            min3 = min2;
            min2 = min1;
            min1 = nr;
        }
        else if (nr < min2)
        {
            min3 = min2;
            min2 = nr;
        }  
        else if (nr < min3)
        {
            min3 = nr;
        }
    }
    
    cout << min3 << " " << min2 << " " << min1 << endl;

    return 0;
}