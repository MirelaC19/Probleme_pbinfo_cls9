/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 11:41:34
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-06 13:12:44
 * @ Description: https://www.pbinfo.ro/probleme/2699/puterileluin
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    long long a = 1LL, p = 0LL;

    cin >> n >> p;
    
    while (a <= p)
    {
        cout << a << " ";
        a = a * n;
    }

    cout << endl;
}