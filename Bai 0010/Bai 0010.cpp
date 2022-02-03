#include<iostream>
using namespace std;

int main()
{
	float num1, num2, sum;
	cout << "\n Please enter your number: ";
	cin >> num1;
	cout << "\n Please enter your poly: ";
	cin >> num2;
	sum = pow(num1, num2);
	cout << "\a\n Your result is: " << sum << endl;
	return 0;
}