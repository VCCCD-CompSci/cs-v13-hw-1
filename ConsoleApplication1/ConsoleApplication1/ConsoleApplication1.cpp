// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class HumanBeing
{
private:
	string name;
	int age;
	string address;

public:
	void display()
	{
		cout << "- Hello, I am a human being";
	}

	void setAge(int a)
	{
		age = a;
	}

	int getAge()
	{
		return(age);
	}

	void setName(string n)
	{
		name = n;
	}

	string getName()
	{
		return(name);
	}

	void setAddress(string a)
	{
		address = a;
	}

	string getAddress()
	{
		return(address);
	}
};

int main()
{
	HumanBeing me;

	string whatName;
	string myName;
	int howOld;
	int myAge;
	string whatAddress;
	string myAddress;
	char correct;

	cout << "\nWhat are you?\n\n";
	me.display();

	cout << "\n\nWhat is your name?\n\n";

	getline(cin, whatName);
	me.setName(whatName);	
	myName = me.getName();
	cout << "- My name is " << myName;

	cout << "\n\nHow old are you?\n\n";

	cin >> howOld;
	cin.ignore();
	me.setAge(howOld);
	myAge = me.getAge();
	cout << "- I am " << myAge << " years old.";

	cout << "\n\nWhere do you live?\n\n";

	getline(cin, whatAddress);
	me.setAddress(whatAddress);
	myAddress = me.getAddress();
	cout << "- I live at " << myAddress << ".";

	cout << "\n======================================\n";
	cout << "\nOkay, let me see if I understand you.\n";
	cout << "\nYour name is: " << myName << "\n";
	cout << "\nYou are: " << myAge << " years old.\n";
	cout << "\nAnd you live at: " << myAddress << "\n\n";

	return 0;
}

