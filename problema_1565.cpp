/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:14:19
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:17:55
 * @ Description: https://www.pbinfo.ro/probleme/1565/nzero
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, a, nr = 1;

    cin >> n >> a;
    
    while (a != 0)
    {
        nr = nr * 10;
        a--;
    }

    cout << n * nr << endl;
}