/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 19:41:15
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 19:49:22
 * @ Description: https://www.pbinfo.ro/probleme/3275/nrsumcifmax
 */

#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, suma, sumb, sumc;

    cin >> a >> b >> c;
    
    suma = a / 10 + a % 10;
    sumb = b / 10 + b % 10;
    sumc = c / 10 + c % 10;
    if (suma == sumb && suma == sumc)
    {
        cout << a << " " << b << " " << c;
    }
    else if (suma == sumb && suma > sumc)
    {
        cout << a << " " << b;
    }
    else if (suma == sumc && suma > sumb)
    {
        cout << a << " " << c;
    }
    else if (sumc == sumb && sumc > suma)
    {
        cout << b << " " << c;
    }
    else if (suma > sumb && suma > sumc)
    {
        cout << a;
    }
    else if (sumb > sumc && sumb > suma)
    {
        cout << b;
    }
    else if (sumc > suma && sumc > sumb)
    {
        cout << c;
    }

    return 0;
}