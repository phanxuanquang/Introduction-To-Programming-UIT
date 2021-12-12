#include <iostream>
using namespace std;
int a[100], b[100], c[200], m, n;
void import(int arr[], int x)
{
    for (int i = 0; i < x; i++)
        cin >> arr[i];
}
int main()
{
    cout << "So phan tu cua mang a la: ";
    cin >> n;
    cout << "Nhap mang a: " << endl;
    import(a, n);
    cout << "So phan tu cua mang b la: ";
    cin >> m;
    cout << "Nhap mang b: " << endl;
    import(b, m);
    cout << endl;

    int p = m + n;
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
        c[i + n] = b[i];
    }

    int temp;
    for (int i = 0; i < p - 1; i++)
    {
        for (int j = i + 1; j < p; j++) 
        {
            if (c[i] > c[j]) 
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    cout << endl << "Mang sau khi sap xep la: " << endl;
    for (int i = 0; i < p; i++)
        cout << c[i] << " ";
}


