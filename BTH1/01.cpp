#include <iostream>
int x;
int main()
{
    std::cout << "Nhap bien so xe: ";
    std::cin >> x;
    while (x < 1000 || x>9999)
    {
        std::cout << "Khong phai bien so xe, vui long nhap lai: ";
            std::cin >> x;
    }
    int a = x % 10;
    int b = (x % 100 - x % 10) / 10;
    int c = ((x-a - b * 10) / 100)%10;
    int d = (x - a - b * 10 - c * 100) / 1000;
    std::cout << (a + b + c + d) % 10;
}

