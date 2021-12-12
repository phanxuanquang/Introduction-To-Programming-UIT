#include <iostream>
using namespace std;
int m, n, a[1000][1000], b[1000][1000], c[1000][1000];
int main()
{
    cout << "So hang cua hai ma tran la: ";  cin >> n;
    cout << "So cot cua hai ma tran la: ";  cin >> m;
    cout << endl;

    cout << "Nhap ma tran thu nhat: " << endl;
    for (int i1 = 1; i1 <= n; i1++)
        for (int j1 = 1; j1 <= m; j1++)
            cin >> a[i1][j1];
    cout << endl;

    cout << "Nhap ma tran thu hai: " << endl;
    for (int i2 = 1; i2 <= n; i2++)
        for (int j2 = 1; j2 <= m; j2++)
            cin >> b[i2][j2];
    cout << endl;
  
    for (int i = 1; i <=n; i++)
        for (int j = 1; j <=m; j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Tong cua hai ma tran la:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=m; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    system("pause");
}