#include <iostream>
using namespace std;
int n, a[1000];
int check(int x[])
{
    for (int k = 1; k <= n; k++)
        if (x[k] < 0)
            return 1;
    return 0;
}
int main()
{
    cout << "So phan tu cua mang la ";
    cin >> n;
    cout << "Nhap mang:" << endl;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (check(a) == 1)
    {
        int max;
        for (int i = 1; i <= n; i++)
            if (a[i] < 0)
            {
                max = a[i];
                break;
            }
        for (int i = 1; i <= n; i++)
            if (a[i] > max && a[i] < 0)
                max = a[i];
        for (int i = 1; i <= n; i++)
            if (a[i] == max)
            {
                cout << "Phan tu am lon nhat trong mang la " << max << " tai vi tri thu " << i << " ";
                return 0;
            }
    }
    else cout << "Mang khong co phan tu am";
}