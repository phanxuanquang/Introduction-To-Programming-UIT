#include <iostream>
using namespace std;
int m, n, tong, a[1000][1000];
void tongHang()
{
    for (int i = 1; i <= n; i++)
    {
        tong = 0;
        for (int j = 1; j <= m; j++)
            tong += a[i][j];
        cout << "Tong hang thu " << i << " la: " << tong << endl;
    }
    cout << endl;
}
void tongCot()
{
    for (int j = 1; j <= m; j++)
    {
        tong = 0;
        for (int i = 1; i <= m; i++)
            tong += a[i][j];
        cout << "Tong cot thu " << j << " la: " << tong << endl;
    }
    cout << endl;
}
void tongMang()
{
    tong = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            tong += a[i][j];
    cout << "Tong cua mang la " << tong << endl;
    cout << endl;
}
void tongTamGiac()
{
    if (m != n) cout << "Khong phai ma tran vuong nen khong co tong tam giac tren va tong tam giac duoi." << endl;
    else
    {
        tong = 0;
        for (int i = 2; i <= n; i++)
        {
            int k = i;
            for (int j = k; j <= m; j++)
                tong += a[i][j];
        }
        cout << "Tong tam giac tren cua mang la " << tong << endl;

        tong = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            int k = i;
            for (int j = k; j >= 1; j--)
                tong += a[i][j];
        }
        cout << "Tong tam giac duoi cua mang la " << tong << endl << endl;
    }
}
int main()
{
    cout << "So hang cua ma tran la: ";  cin >> n;
    cout << "So cot cua ma tran la: ";  cin >> m;
    cout << endl;
    cout << "Nhap ma tran: " << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    cout << endl;
    tongHang();
    tongCot();
    tongMang();
    tongTamGiac();
    system("pause");
}