#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float num, pro, sum;
	cout << "\n please enter your number: ";
	cin >> num;
	pro = 1;
	sum = 0;
	for (int i = 1; i <= num; i++)
	{
		pro = pro * i;
		sum = sum + pro;
	}
	cout << "\a\n your result is: " << sum;

	return 0;
}