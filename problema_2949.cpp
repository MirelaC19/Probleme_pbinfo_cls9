/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-05 18:13:43
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-05 18:18:59
 * @ Description: https://www.pbinfo.ro/probleme/2949/medie-armonica
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, a;
    float i = 0, s = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s += 1  * 1.0 / a;
        n--;
    }
    
    i = n * 1.0 / s;

    int j = i * 100;
    
    cout << fixed << setprecision(2) << j * 1.0 / 100 << endl;
}