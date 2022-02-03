#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float num, sum;
	sum = 1;
	cout << "\n Please enter your number: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum = sum + 1.0 / ((2 * i) + 1);
	}

	cout << "\a\n Your result is: " << sum << endl;
	return 0;

}