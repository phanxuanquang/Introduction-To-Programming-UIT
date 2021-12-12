#include <iostream>
int main()
{
    std::cout << "So nguyen duong n la ";
    int n;
    std::cin >> n;
    long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        long int sum1 = 1;
        for (int j = 1; j <= i; j++)
            sum1 *= j;
        sum += sum1;
        sum1 = 1;
    }
    std::cout << "Tong la " << sum;
}
