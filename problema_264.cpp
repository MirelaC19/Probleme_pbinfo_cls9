/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 11:19:31
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-10 10:07:43
 * @ Description: https://www.pbinfo.ro/probleme/264/maxcif
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("maxcif.in");
ofstream out("maxcif.out");

int main(void)
{
    int n, max = 0;
    int a[10] = {0};

    while (in >> n)
    {
        a[n]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == max)
        {
            out << i << " ";
        }
    }
    
}