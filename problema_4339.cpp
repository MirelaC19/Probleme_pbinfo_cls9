/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:34:31
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:38:15
 * @ Description: https://www.pbinfo.ro/probleme/4339/pare-impare
 */

#include <iostream>

bool is_par(int n);

using namespace std;

int main(void)
{
    int a, b, c, p = 0, i = 0;
    
    cin >> a >> b >> c;
    if (is_par(a) == true)
    {
        p++;
    }
    else
    {
        i++;
    }
    if (is_par(b) == true)
    {
        p++;
    }
    else
    {
        i++;
    }
    if (is_par(c) == true)
    {
        p++;
    }
    else
    {
        i++;
    }
    
    if (p > i)
    {
        cout << "pare";
    }
    else if (p < i)
    {
        cout << "impare";
    }
}

bool is_par(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}