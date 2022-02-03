#include<iostream>
using namespace std;

int main()
{
	float num, temp, sum;
	cout << "\n Please enter your number: ";
	cin >> num;
	sum = 0;
	int i = 1;
	while (i <= num)
	{
		temp = i;
		sum = sum + 1.0 / (temp * (i + 1));
		i++;
	}
	cout << "\a\n Your result is: " << sum << endl;
	return 0;
}