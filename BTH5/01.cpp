#include <iostream>
using namespace std;
int n, i, j;
int main()
{
    cout << "n = ";
    cin >> n;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        int mul = 1;
        for (j = 1; j <= i; j++)
            mul *= j;
        sum += mul;
    }
    cout << "Tong la " << sum;
}
