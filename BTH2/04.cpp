#include <iostream>
int main()
{
    std::cout << "Nhap so tu nhien n: ";
    int n;
    std::cin >> n;
    std::cout << "Tong cac chu so cua so " << n << " la ";
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
   }
    std::cout << sum;
}


