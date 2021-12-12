#include <iostream>
using namespace std;
int n, m, a[1000][1000];
int main()
{
    cout << "So hang cua mang hai chieu la: ";  cin >> n;
    cout << "So cot cua mang hai chieu la: ";  cin >> m;
    cout << endl;

    cout << "Nhap mang hai chieu co " << m << " hang va " << n << " cot: " << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    cout << endl;

    int max = a[1][1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (max <= a[i][j])
                max = a[i][j];
    cout << "Gia tri lon nhat trong mang la: " << max << endl;

    int min = a[1][1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (min >= a[i][j])
                min = a[i][j];
    cout << "Gia tri nho nhat trong mang la: " << min << endl;
    cout << endl;
    system("pause");
}