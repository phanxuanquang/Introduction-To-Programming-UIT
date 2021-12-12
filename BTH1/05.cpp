#include <iostream>
using namespace std;
float a, b, c;
int main()
{
	cout << "Nhap lan luot ba he so cua phuong trinh bac hai: " ;
	cin >> a >> b >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) cout << "Phuong trinh vo so nghiem";
			else cout << "Phuong trinh vo nghiem";
		}
		else cout << "Phuong trinh co nghiem la: " << -c / b;
	}
	else 
              {
		float delta = b * b - 4 * a * c;
		if (delta < 0) cout << "Phuong trinh vo nghiem";
		else if (delta == 0) cout << "Phuong trinh co nghiem la: " << -b / 2 * a;
		else cout << "Phuong trinh co hai nghiem gom " << (-b + sqrt(delta)) / (2 * a) << " va " << (-b - sqrt(delta)) / (2 * a);
	}
}


