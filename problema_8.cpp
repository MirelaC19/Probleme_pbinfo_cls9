/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-10 11:04:45
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 11:08:13
 * @ Description: https://www.pbinfo.ro/probleme/8/maxim3
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("maxim3.in");
ofstream out("maxim3.out");

int main(void)
{
    int a, max = 0;

    while (in >> a)
    {
        if (a > max)
        {
            max = a;
        }
    }

    out << max << endl;
}