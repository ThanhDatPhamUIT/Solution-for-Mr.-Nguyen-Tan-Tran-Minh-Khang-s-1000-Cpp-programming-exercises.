#include<iostream>
using namespace std;

int main()
{
	float sum, num;
	cout << "\n Please enter your number: ";
	cin >> num;
	sum = 0;

	for (int i = 1; i <= num; i++)
	{
		sum = sum + i / (i + 1.0);
	}
	cout << "\a\n Your result is: " << sum << endl;

	return 0;
}