/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 11:31:19
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 19:00:21
 * @ Description: https://www.pbinfo.ro/probleme/2222/p10-10
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n, k, t = 0;
    
    cin >> n >> k;
    while (n != 1)
    {
        n = n / 10;
        t++;
    }
    cout << 1;
    for (int i = 0; i < t * k; i++)
    {
        cout << 0;
    }
    cout << endl;
}