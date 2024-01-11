/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 18:31:53
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-04 18:36:42
 * @ Description: https://www.pbinfo.ro/probleme/4274/para1
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n;
    char c;
    
    cin >> n >> c;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << c;
        }
        cout << endl;
    }
}