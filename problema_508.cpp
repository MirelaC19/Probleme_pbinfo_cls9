/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 13:07:11
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 13:36:47
 * @ Description: https://www.pbinfo.ro/probleme/508/cautare-binara
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cin >> n;
    if (n < 0)
    {
        return 1;
    }
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    cin >> m;
    if (m < 0)
    {
        return 1;
    }
    int y[m];
    for (int i = 0; i < m; i++)
    {
        cin >> y[i]; 
    }

    for (int i = 0; i < m; i++)
    {
        int min = 0, max = n - 1;
        int current;
        int found = 0;
        while (min < max)
        {
            current = (min + max) / 2;
            if (y[i] == x[current])
            {
                found = 1;
                break;
            }
            else if (y[i] < x[current])
            {
                max = current - 1;
            }
            else
            {
                min = current + 1;
            }
            // cout << min << " " << max << endl;
        }
        if (found == 0 && y[i] == x[min] && min == max)
        {
            found = 1;
        }
        cout << found << " ";
    }
    cout << endl;

    return 0;
}