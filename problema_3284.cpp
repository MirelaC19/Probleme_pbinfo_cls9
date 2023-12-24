/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 12:19:09
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 19:45:48
 * @ Description: https://www.pbinfo.ro/probleme/3284/calcparimpar
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a, max = -1, min = 100, p_min = -1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (max < a && (i + 1) % 2 == 0)
        {
            max = a;
        }
        if (min > a && (i + 1) % 2 != 0 && a >= 10)
        {
            min = a;
            p_min = i + 1;
        }
    }
    if (p_min == -1)
    {
        min = -1;
    }
    cout << max << " " << min << endl;
    
    return 0;
}