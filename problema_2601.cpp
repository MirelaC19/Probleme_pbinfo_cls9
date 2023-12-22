/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 18:48:50
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 18:51:00
 * @ Description: https://www.pbinfo.ro/probleme/2601/sumapatratecifre
 */

#include <iostream>

using namespace std;

int main(void) 
{
    int a, ca, s = 0;
    
    cin >> a;
    ca = a;
    while (a != 0)
    {
        ca = a % 10;
        s = s + (ca * ca);
        a = a / 10;
    }
    cout << s;
}