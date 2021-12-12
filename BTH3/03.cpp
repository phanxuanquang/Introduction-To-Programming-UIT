#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    cout << "So phan tu cua mang la ";
    cin >> n;
    cout << "Nhap mang" << endl;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        if (a[i] > a[i + 1])
        {
            cout << "Mang khong tang dan" << endl;
            return 0;
        }
    cout << "Mang tang dan";
}


