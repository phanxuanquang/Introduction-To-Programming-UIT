#include <iostream>
int prime(int x)
{
    for (int k = 2; k < x; k++)
        if (x % k == 0)
            return 0;
    return 1;
}
int main()
{
    std::cout << "Nhap mot so tu nhien n nho hon 100: ";
    int n;
    std::cin >> n;
    std::cout << "Cac so nguyen to nho hon " << n << " gom co ";
    for (int i = 1; i < n; i++)
        if (prime(i) == 1)
            std::cout << i << " ";
}

