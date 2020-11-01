#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "\n\nEnter the current year: ";
	cin >> year;
	for(int i = 0; i <= 80; i++)
	{
		if (year%4 == 0 && i == 0)	year++;
		if (year%4 == 0)		cout << "\n\n" << year;
		year++;
	}
  return 0;
}
