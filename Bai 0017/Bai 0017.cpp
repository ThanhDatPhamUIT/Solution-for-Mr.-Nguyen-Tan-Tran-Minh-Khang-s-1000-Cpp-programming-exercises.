#include<iostream>
using namespace std;

int main()
{
	float x, sum, n, t, m;
	cout << "\n Xin moi nhap so: ";
	cin >> x;
	cout << "\n Xin moi nhap tong cac so: ";
	cin >> n;
	t = 1;
	m = 1;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		m = m * i;
		sum = sum + t / m;
	}
	cout << "\n Ket qua la: " << sum << endl;

	return 0;
}