#include <iostream>
using namespace std;
int m1, m2, n1, n2, a[1000][1000], b[1000][1000], c[1000][1000];
int main()
{
    cout << "So hang cua ma tran thu nhat la: ";  cin >> n1;
    cout << "So cot cua ma tran thu nhat la: ";  cin >> m1;
    cout << endl;
    cout << "So hang cua ma tran thu hai la: ";  cin >> n2;
    cout << "So cot cua ma tran thu hai la: ";  cin >> m2;
    cout << endl;
    if (m1 != n2) cout << "So cot cua ma tran thu nhat phai bang so hang cua ma tran thu hai.\nHay thoat chuong trinh va thuc hien lai." << endl;
    else
    {
        cout << "Nhap ma tran thu nhat: " << endl;
        for (int i = 1; i <= n1; i++)
            for (int j = 1; j <= m1; j++)
                cin >> a[i][j];
        cout << endl;

        cout << "Nhap ma tran thu hai: " << endl;
        for (int i = 1; i <= n2; i++)
            for (int j = 1; j <= m2; j++)
                cin >> b[i][j];
        cout << endl;

        for (int i = 1; i <= n1; i++)
            for (int j = 1; j <= m2; j++)
            {
                c[i][j] = 0;
                for (int k = 1; k <= n2; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
            
        cout << endl << "Tich hai ma tran la: " << endl;
        for (int i = 1; i <= n1; i++)
        {
            for (int j = 1; j <= m2; j++)
                cout << c[i][j] << " ";
            cout << endl;
        }
    }
    cout << endl;
    system("pause");
}