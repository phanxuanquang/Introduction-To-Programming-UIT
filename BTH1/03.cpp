#include <iostream>
int a, b, c, x, y, z;
int main()
{
    std::cout << "Nhap lan luot theo thu tu gio, phut, giay thu nhat: ";
    std::cin >> a >> b >> c;
    while (b>59 || b<0 || c>59 || c<0)
    {
        std::cout << "Luu y: Phut va giay phai nam trong khoang tu 0 den 59. \nVui long nhap lai theo thu tu gio, phut, giay thu nhat: ";
        std::cin >> a >> b >> c;
    }
    std::cout << "Nhap lan luot theo thu tu gio, phut, giay thu hai:  ";
    std::cin >> x >> y >> z;
    while (y > 59 || y < 0 || z>59 || z < 0)
    {
        std::cout << "Luu y: Phut va giay phai nam trong khoang tu 0 den 59. \nVui long nhap lai theo thu tu gio, phut, giay thu hai: ";
        std::cin >> x >> y >> z;
    }
    long long int giay1 = a * 3600 + b * 60 + c;
    long long int giay2 = x * 3600 + y * 60 + z;
    long long int tong = giay1 + giay2;
    int gio = tong / 3600;
    int phut = (tong - gio * 3600) / 60;
    std::cout << "\n" << "Tong cua hai gio la: " << gio << " gio " << phut << " phut " << tong - gio * 3600 - phut * 60 << " giay" << "\n";
    long long int hieu = abs(giay1 - giay2);
    gio = hieu / 3600;
    phut = (hieu - gio * 3600) / 60;
    std::cout << "Hieu cua hai gio la: " << gio << " gio " << phut << " phut " << hieu - gio * 3600 - phut * 60 << " giay" << "\n";
}
