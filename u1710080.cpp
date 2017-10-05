// A company insures its drivers

#include <iostream>
using namespace std;
int main()
{
	char driver, gender, y, n, m, f;
	int age;
	cout << "If you are married say Y" << endl << "If you are not married say N" << endl;
	cin >> driver;
	if (tolower(driver) == 'y')
	{
		cout << "Hey! You are insured" << endl;
	}

	if (tolower(driver) == 'n')
	{
		cout << "If your gender is male, write M" << endl << "If your gender is female, write F" << endl;
		cin >> gender;
		if (tolower(gender) == 'm')
		{
			cout << "Give your age" << endl;
			cin >> age;
				if (age > 30)
				{
					cout << "Congratulations! You are insured!!!" << endl;
				}
				else
					cout << "Sorry! You are not insured!!!" << endl;
			
		}
		if (tolower(gender) == 'f')
		{
			cout << "Give your age" << endl;
			cin >> age;
			if (age > 25)
			{
				cout << "Congratulations! You are insured!!!" << endl;
			}
			else
				cout << "Sorry! You are not insured!!!" << endl;

		}



	}
	system("pause");
	return 0;
}
