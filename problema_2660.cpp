/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2024-01-04 13:45:06
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2024-01-06 12:54:56
 * @ Description: https://www.pbinfo.ro/probleme/2660/produsprimeledouacifre
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    // int a = 0, p = 1;
    // long long n = 0LL, cn = 0LL;

    // cin >> n;
    // cn = n; //cn reprz copie n;

    // while (cn != 0)
    // {
    //     a++;
    //     cn = cn / 10;
    // }

    // cn = a - 2; //cn reprz nr de cifre - 2;
    // long long nr = 1LL;
    // while (cn != 0)
    // {
    //     nr = nr * 10;
    //     cn--;
    // }

    // n = n / nr;

    // while (n != 0)
    // {
    //     p = p * (n % 10);
    //     n = n / 10;
    // }

    // cout << p << endl;

    //Varianta scurta folosind log in baza 10;

    long long n = 0LL;

    cin >> n;

    int nr_cifre = log10(n) + 1;

    n = n / pow(10, nr_cifre - 2);
    cout << (n / 10) * (n % 10) << endl;
}