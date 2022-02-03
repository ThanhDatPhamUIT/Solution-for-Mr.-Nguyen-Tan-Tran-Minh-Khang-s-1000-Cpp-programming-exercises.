#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x;
	cout << "\n xin moi nhap x: ";
	cin >> x;
	int n;
	cout << "\n xin moi nhap n: ";
	cin >> n;
	float t = 1;
	int i = 1;
	float s = 0;
	while (i <= n)
	{
		t = t * x; //Luy Thua  VD: x=2 => T=1*2 lan2 T=2*2=2^3 lan3: T=2^2*2=2^3
		s = s + t;
		i++;
	}
	cout << "\n\a Ket qua la: " << s << endl;

	return 0;
}