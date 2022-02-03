#include<iostream>
using namespace std;

int main()
{
	float sum, num;
	cout << "\n Please enter your number: ";
	cin >> num;
	sum = 1.0/2;
	for (int i = 1; i <= num; i++)
	{
		sum = sum + (2.0 * i + 1.0) / (2.0 * i + 2.0);
	}
	cout << "\n\a Your result is: " << sum << endl;

	return 0;
}