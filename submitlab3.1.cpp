#include <iostream>
#include <string>
using namespace std;
int main()
{
	string password;
	char again = 'y';
	cout << "Please enter a password. It must be at least 8 characters long and contain at least 2\nalpha characters, at least one upper case and one lower case, at least 1 numbers, and at\nleast 1 special character such as #, @ or $. Note that blank spaces are not permitted." << endl;

	while (again != 'n')
	{

		cout << "\nEnter password: ";
		getline(cin, password);
		cout << endl;

		int alpha_count = 0;
		int upper_count = 0;
		int lower_count = 0;
		int numbers_count = 0;
		int special_count = 0;
		int blanks = 0;

		for (int i = 0; i < password.length(); i++)
		{
			if (password[i] >= 'a' && password[i] <= 'z')
			{
				alpha_count++;
				lower_count++;
			}
			else if (password[i] >= 'A' && password[i] <= 'Z')
			{
				alpha_count++;
				upper_count++;
			}
			else if (password[i] >= '0' && password[i] <= '9')
			{
				numbers_count++;
			}
			else if (password[i] == ' ')
			{
				blanks++;
			}
			else
			{
				special_count++;
			}
		}



		if (password.length() < 8 || alpha_count < 2 || lower_count < 1 || upper_count < 1 || numbers_count < 1 || special_count < 1 || blanks>0)
		{
			cout << "Invalid password: " << endl;

			if (password.length() < 8)
				cout << ">>> At least 8 characters" << endl;
			if (alpha_count < 2)
				cout << ">>> At least 2 alpha characters" << endl;
			if (lower_count < 1)
				cout << ">>> At least one lower case" << endl;
			if (upper_count < 1)
				cout << ">>> At least one upper case" << endl;
			if (numbers_count < 1)
				cout << ">>> At least one number" << endl;
			if (special_count < 1)
				cout << ">>> At least one special character" << endl;
			if (blanks > 0)
				cout << ">>> Blank spaces are not permitted" << endl;

		}
		else
		{
			cout << "Password accepted!" << endl;
		}

		cout << "Try again? ";
		cin >> again;
		cin.ignore();
		cout << endl;

	}

	cout << "Goodbye and Happy Programming!" << endl;

	return 0;
}