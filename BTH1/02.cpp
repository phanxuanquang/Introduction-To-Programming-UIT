#include <iostream>
int main()
{
    char x;
    std::cout << "Nhap ky tu: ";
    std::cin >> x;
    while (int(x) < 65 || int(x) > 122 || (int(x) >=91 && int(x)<=96))
    {
        std::cout << x << " khong phai chu cai, vui long nhap lai: ";
        std::cin >> x;
    }
    if (int(x) > 64 && int(x) < 91) std::cout << "Dang in hoa cua ky tu " << x << " chinh la " << x;
    else std::cout << "Dang in hoa cua ky tu " << x << " la " << char(int(x - 32));
}

