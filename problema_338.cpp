/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 15:13:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 19:57:01
 * @ Description: https://www.pbinfo.ro/probleme/338/expresie5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n;
    long long s = 0LL;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long p = 1LL;
        for (int j = 1; j <= i; j++)
        {
            p = p * i;
        }
        s += p;
    }
    
    cout << "Rezultatul este " << s << endl;
    return 0;
}