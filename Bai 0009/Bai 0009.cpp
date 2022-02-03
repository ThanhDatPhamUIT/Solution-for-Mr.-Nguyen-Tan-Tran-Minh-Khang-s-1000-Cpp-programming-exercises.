#include<iostream>
using namespace std;

int main()
{
	int pro, num;
	cout << "\n Please enter your number: ";
	cin >> num;
	pro = 1;
	for (int i = 1; i <= num; i++)
	{
		pro = pro * i;
	}
	cout << "\n\a Your resut is: " << pro << endl;

	return 0;
}