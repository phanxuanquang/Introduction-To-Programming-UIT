#include <iostream>
using namespace std;
int n, i, j, a[100];
int max()
{
	int max1 = a[0];
	for (int k = 0; k < n; k++)
		if (a[k] > max1)
			max1 = a[k];
	return max1;
}
int min()
{
	int min1 = a[0];
	for (int k = 0; k < n; k++)
		if (a[k] < min1)
			min1 = a[k];
	return min1;
}
int main()
{
	cout << "So phan tu cua mang la: ";
	cin >> n;
	cout << "Nhap mot mang co " << n << " phan tu: " << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] == max())
			a[i] = min();
	if (min() == max())
		cout << "Khong co";
	else cout << "Phan tu lon thu hai trong mang la " << max();
}
