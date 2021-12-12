#include <iostream>
using namespace std;
int i, a[100];
void NhapSo(int n)
{
    while (a[i] > a[i - 1] && i <= n)
    {
        i++;
        cin >> a[i];
    }
}
int prime(int x)
{
    for (int l = 2; l < x; l++)
        if (x % l == 0)
            return 0;
    return 1;
}
int main()
{
    cout << "Nhap 10 so nguyen: " << endl;
    cin >> a[0] >> a[1];
    i = 1;
    NhapSo(8);
    cout << endl << "Cac so nguyen to trong mang gom co: ";
    for (int k = 1; k <= i-1; k++)
            if (prime(a[k]) == 1)
                cout << a[k] << " ";
    cout << endl;
}
