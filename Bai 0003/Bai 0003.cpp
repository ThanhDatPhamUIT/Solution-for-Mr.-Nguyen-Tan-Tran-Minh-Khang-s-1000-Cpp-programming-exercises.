#include<iostream>
using namespace std;

int main()
{
	float num, sum;
	sum = 0;
	cout << "\n Please enter your number: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		sum = sum + 1.0 / i;
	}

	cout << "\a\n Your result is: " << sum << endl;

	return 0;
}