#include <iostream>
#include <string>
using namespace std;
int main()
{
	char Choice;
	string id1,pw1,id2,pw2;
	do
	{
	cout << "/////////////////MENU/////////////////\n" << endl;
	cout << " 1. Register" << endl;
	cout << " 2. Login" << endl;
	cout << " Q. Exit Program\n" << endl;
	cout << "---------------------------------\n" << endl;
	cout << "Enter menu : ";
	cin >> Choice;
	if (Choice == '1')
	{
		cout << "Input Username : ";
		cin >> id1;
		cout << "Input Password : ";
		cin >> pw1;
		cout << endl;
	}
	if (Choice == '2')
	{
		cout << "Input Username : ";
		cin >> id2;
		cout << "Input Password : ";
		cin >> pw2;
		cout << endl;

		if (id2 == id1 && pw2 == pw1)
		{
		cout << "Username or Password correct ^____^\n" << endl;
		}
		else 
		{	
			cout << "!!!Username or Password incorrect Please try again!!!!\n" << endl;
		}
	}
	if (Choice == 'Q')
	{
		cout << endl;
		cout << "Exit Program " << endl;
		break;
	}
	}while(Choice != true);
	cout << endl;
	return(0);
} 