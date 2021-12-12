#include <iostream>
int main()
{
    int a, b, c;
    std::cout << "Nhap lan luot ba so nguyen: ";
    std::cin >> a >> b >> c;
    if (a >= b && a >= c) std::cout << "So lon nhat la " << a;
    else if (b >= c && b >= a) std::cout << "So lon nhat la " << b;
    else std::cout << "So lon nhat la " << c;
    std::cout << " va ";
    if (a <= b && a <= c) std::cout << "so nho nhat la " << a;
    else if (b <= c && b <= a) std::cout << "so nho nhat la " << b;
    else std::cout << "so nho nhat la " << c;
}

