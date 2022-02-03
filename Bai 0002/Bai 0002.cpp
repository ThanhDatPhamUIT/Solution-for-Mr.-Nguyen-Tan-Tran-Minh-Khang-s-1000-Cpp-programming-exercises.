#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float num, sum;
	sum = 0;
	cout << "\n Please enter your number: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum = sum + pow(i, i);
	}

	cout << "\a\n your result is: " << sum << endl;

	return 0;
}