/**
 * @ Author: Mirela Cretu
 * @ Create Time: 2023-12-24 20:04:57
 * @ Modified by: Mirela Cretu
 * @ Modified time: 2023-12-24 20:17:10
 * @ Description: sirul lui fibonacci recursiv
 */

#include <iostream>

using namespace std;

int fib(int n);

int main(void)
{
    int n;

    cin >> n;

    cout << fib(n) << endl;
}

int fib(int n)
{
    int f = 0;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    f = fib(n - 1) + fib(n - 2);
    return f;
}