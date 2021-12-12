#include <iostream>
using namespace std;
int n, k, a[1000], b[1000];
int del(int x)
{
    if (x < 0 || x >= n)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i < x; i++)
            b[i] = a[i];
        for (int i = x; i < n; i++)
            b[i] = a[i+1];
        n--;
        return 1;
    }
}
int main()
{
    cout << "So phan tu cua mang la ";
    cin >> n;
    cout << "Nhap mang:" << endl;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << "Cac phan tu cua mang ban dau la: ";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "Chi so k la : ";
    cin >> k;
    cout << del(k);
    if (k < 0 || k >= n)
        cout << endl << "Khong co phan tu bi xoa";
    else
    {cout << endl << "Mang sau khi xoa la: ";
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";   }
}
