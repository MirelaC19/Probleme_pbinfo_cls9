/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-30 11:39:38
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-30 11:44:07
 * @ Description: https://www.pbinfo.ro/probleme/459/suma1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, m , s = 0;
    
    do
    {
        cin >> n;
        s = s + n;
        if (n == m)
        {
            break;
        }
        m = n;
    } while (n > 0);
    cout << s << endl;
}