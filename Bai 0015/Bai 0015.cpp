#include<iostream>
using namespace std;

int main()
{
	float num, sum, m;
	cout << "\n please enter your number: ";
	cin >> num;
	sum = 0;
	m = 0;

	for (int i = 1; i <= num; i++)
	{
		m = m + i;
		sum = sum + 1 / m;
	}
	cout << "\n\a Your result is: " << sum << endl;

	return 0;
}