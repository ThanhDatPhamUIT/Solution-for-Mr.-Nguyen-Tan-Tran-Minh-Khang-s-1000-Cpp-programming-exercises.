#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x, n;
	cout << "\n Xin moi nhap x: ";
	cin >> x;
	cout << "\n Xin moi nhap n: ";
	cin >> n;
	int T, S, i;
	T = 1;
	S = 0;
	i = 1;
	while (i <= n)
	{
		T = T * x * x;
		S = S + T;
		i++;
	}
	cout << "\n Ket qua cua ban la: " << S << endl;

}