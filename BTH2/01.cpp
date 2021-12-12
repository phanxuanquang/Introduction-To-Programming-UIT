#include <iostream>;
int main()
{
    int n;
    std::cout << "So nguyen n la ";
    std::cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (double) 1 / (2 * i);
    std::cout << "Tong la " << sum;
}
