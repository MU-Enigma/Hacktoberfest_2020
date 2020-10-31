#include <iostream>

int main()
{
	int year;
	
	std::cout << "Enter the current year: ";
	std::cin >> year;
	
	for(int i = 0; i <= 80; i++)
	{
		if (year%4 == 0 && i == 0)
		{
			year++;
		}
		if (year%4 == 0)
		{
			std::cout << "\n\n" << year;
		}
		
		year++;
	}
}