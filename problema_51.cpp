/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 18:58:13
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 18:59:20
 * @ Description: https://www.pbinfo.ro/probleme/51/suma
 */

#include <iostream>

using namespace std;

int main(void)
{
    int n, s = 0;
    
    do
    {
        cin >> n;
        s = s + n;
    } while (n != 0);
    cout << s << endl;
    return 0;
}