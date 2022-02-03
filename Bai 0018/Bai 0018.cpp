#include<iostream>
using namespace std;

int main()
{
	float sum, x, n, t, m, N;
	cout << "\n xin moi nhap x: ";
	cin >> x;
	cout << "\n xin moi nhap tong so n: ";
	cin >> n;
	sum = 1;
	t = 1;
	N = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x * x;
		m = i * 2;
		N = N * m * (m - 1);
		sum = sum + t / N;

	}
	cout << "\n Your result is: " << sum << endl;
	return 0;
}