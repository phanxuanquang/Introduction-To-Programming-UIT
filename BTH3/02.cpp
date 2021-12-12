
#include <iostream>
using namespace std;
int n, a[1000];
int main()
{
    cout << "So phan tu cua mang la ";
    cin >> n;
    cout << "Nhap mang: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
            if (a[i] != a[n-1-i])
            {
                cout << "Mang khong doi xung.";
                return 0;
            }
    cout << "Mang doi xung";
}

