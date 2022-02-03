#include<iostream>
using namespace std;

int main()
{
	float sum, x, n, T, M, temp;
	cout << "\n Xin moi nhap x: ";
	cin >> x;
	cout << "\n Xin moi nhap so luong: ";
	cin >> n;
	T = x
		;
	M = 1;
	sum = 1 + x; 
	for (int i = 1; i <= n; i++)
	{
		T = T * x * x;
		temp = i * 2 + 1;
		M = M * temp * (temp - 1);
		sum = sum + T / M;
	}
	cout << "\n Your result is: " << sum << endl;
	return 0;
}