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
	T = x;
	S = x;
	i = 1;
	while (i <= n)
	{
		T = T * x * x; //lan1 T=x^3 lan2: T=X^5
		S = S + T;//lan1: T=x+x^3 lan2: T=x+x^3+x^5
		i++;
	}
	cout << "\n Ket qua cua ban la: " << S << endl;

}