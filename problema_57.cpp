/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-28 16:07:31
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-28 16:09:32
 * @ Description: https://www.pbinfo.ro/probleme/57/n-suma
 */

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("n_suma.in");
ofstream out("n_suma.out");

int main(void)
{
    int n, a, s = 0;

    in >> n;

    for (int i = 0; i < n; i++)
    {
        in >> a;
        s = s + a;
    }

    out << s;
    return 0;
}