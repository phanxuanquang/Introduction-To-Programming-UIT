#include <iostream>
using namespace std;
int n, a[1000][1000];
int main()
{
    cout << "Cap cua ma tran la: ";
    cin >> n;
    cout << "Nhap mot ma tran vuong cap " << n << ": " << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] != a[j][i])
            {
                cout << "Ma tran khong doi xung qua duong cheo chinh." << endl;               
                return 0;
            }
    cout << "Ma tran doi xung qua duong cheo chinh." << endl;
}

