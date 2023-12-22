/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-22 13:08:06
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-22 13:29:30
 * @ Description: https://www.pbinfo.ro/probleme/2269/maximpar
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("maximpar.in");
ofstream out("maximpar.out");

int main()
{
    int n, max, ap;

    in >> n;
    int nr;
    max = -1;
    ap = 1;
    for (int i = 0; i < n; i++)
    {
        in >> nr;
        if (nr == max)
        {
            ap++;
        }
        if (nr % 2 == 0 && max < nr)
        {
            max = nr;
            ap = 1;
        }
    }
    if (max == -1)
    {
        out << -1;
        return 0;
    }
    out << max << " " << ap;
    
    return 0;
}
