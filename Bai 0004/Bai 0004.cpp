#include<iostream>
using namespace std;

int main()
{
	float num, sum;
	cout << "\n Please enter your number: ";
	cin >> num;
	sum = 0;

	for (int i = 1; i <= num; i++)
	{
		sum = sum + 1.0 / (i * 2);
		cout << sum << endl;
	}
	cout << "\n your result is: " << sum << endl;

	return 0;
}