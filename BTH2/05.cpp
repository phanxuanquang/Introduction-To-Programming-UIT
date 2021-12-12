#include <iostream>
int main()
{
    int a, b;
    std::cout << "So tu nhien a la ";
    std::cin >> a;
    std::cout << "So tu nhien b la ";
    std::cin >> b;
    while (a * b != 0)
    {
        if (a > b)
            a %= b;       
        else      
            b %= a;      
    }
    std::cout << "Uoc chung lon nhat cua hai so la " << a + b;
}

