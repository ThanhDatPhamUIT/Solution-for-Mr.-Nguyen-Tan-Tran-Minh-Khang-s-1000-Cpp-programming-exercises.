#include<iostream>
using namespace std;

int main()
{
	float num, sum;

	cout << "\n Pls enter your number: ";
	cin >> num;
	sum = 0; 

	for (int i = 0; i <= num; i++)
	{
		sum = sum + i;
	}

	cout << "\a\n Your result is: " << sum << endl;
}