#include<iostream>
using namespace std;

int main()
{
	float sum, num, m, n, t;
	cout << "\n Please enter your number: ";
	cin >> n;
	cout << "\n Please enter your total number: ";
	cin >> num;
	t = 1;
	m = 0;
	sum = 0;
	for (int i = 1; i <= num; i++)
	{
		t = t * n;
		m = m + i;
		sum = sum + t / m;
	}
	cout << "\n\a Your result is: " << sum << endl;

	return 0;
}