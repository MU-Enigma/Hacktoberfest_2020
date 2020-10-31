#include <iostream>

using namespace std;

int main()
{
	int a,b,c,a2,b2,c2;
	
	cout << "\n\nEnter 3 numbers: ";
	cin >> a >> b >> c;
	
	a2 = a*a;
	b2 = b*b;
	c2 = c*c;
		
	if (a2 == b2 + c2)
	{
		cout << "\n\n" << a << " " << b << " " << c;
	}
	
	else if (b2 == a2 + c2)
	{
		cout << "\n\n" << b << " " << a << " " << c;
	}
	
	else if (c2 == a2 + b2)
	{
		cout << "\n\n" << c << " " << a << " " << b;
	}
	
	else
	{
		cout << "\n\nNOPE!";
	}
}