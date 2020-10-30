#include <iostream>
#include <string>

using namespace std;

int main()
{
	string choice = "n";
	int x;
	
	do
	{
		cout << "\n\nEnter a number: ";
		cin >> x;
		
			switch(x)
			{
				case 1:
					cout << "\n\nThat's Monday!";
					break;
					
				case 2:
					cout << "\n\nThat's Tuesday!";
					break;
					
				case 3:
					cout << "\n\nThat's Wednesday!";
					break;
					
				case 4:
					cout << "\n\nThat's Thursday!";
					break;
					
				case 5:
					cout << "\n\nThat's Friday!";
					break;
					
				case 6:
					cout << "\n\nThat's Saturday!";
					break;
					
				case 7:
					cout << "\n\nThat's Sunday!";
					break;
					
				default:
					break;
			}
			
			cout << "\n\nAnother one(y/n): ";
			cin >> choice;
			
			if (choice == "y" || choice == "n")
			{
				continue;
			}
			
			else
			{
				cout << "Not " << choice << ". Please give y or n. Another one?: ";
				cin >> choice;
			}
	}while(choice == "y");
}