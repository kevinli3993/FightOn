#include <vector>
#include <iostream>
#include <string>
#include <stdexcept>
#include "MyList.h"

using namespace std;

int main()
{
	cout << "begining program" << endl;
	
	// create int and string lists
	MyList <int> int_list;	
	MyList <string> string_list;
	
	cout << "Adding values..." << endl;
	
	//pushback a few integers and strings
	int_list.push_back(0);
	int_list.push_back(1);
	int_list.push_back(2);
	string_list.push_back("hello");
	string_list.push_back("world");
	string_list.push_back("again");
	string_list.push_back("and");
	string_list.push_back("again");
	string_list.push_back("and");
	string_list.push_back("again.");
	
	cout << "Size of integer list: " << int_list.size() << endl;
	cout << "Size of string list: " << string_list.size() << endl << endl;
	
	//iterate and disply values
	cout << "Printing Integer List: ";
	for (int i = 0; i < int_list.size(); i++)
	{
		cout << int_list.at(i);
	}
	cout << endl << endl;
	
	cout << "Printing String List: ";
	for (int i = 0; i < string_list.size(); i++)
	{
		cout << string_list.at(i);
	}
	cout << endl ;
	
	
	//try catch block
	cin.exceptions(ios_base::failbit);
	int location;
	do
	{
		cout << "pop location: ";
		try
		{
			cin >> location;
			int_list.pop(location);
			break;
		}catch(int loc)
			{
				cerr << "Invalid location: " << loc << endl;
		}catch(ios_base::failure& e)
			{
				cerr << "That isn't even a number..." << endl;
				cin.clear();
				cin.ignore(1000,'\n');
		}catch(...)
			{
				cout << "Invalid Entry" << endl;
		}
	}while(true);
	
	string s;
	bool removed;
	do
	{
		cout << "Remove string: ";
		try
		{
			cin >> s;
			removed = string_list.remove(s);
			break;
		}catch(ios_base::failure& e)
			{
				cerr << "That is not an integer" << endl;
		}catch(...)
			{	
				cerr << "Error" << endl;
		}
	}while(true);
	
	if(removed) cout << "String " << s << " was removed." << endl;
	else cout << "String " << s << " was not found." << endl;
	
	cout << "Printing String List: ";
	for (int i = 0; i < string_list.size(); i++)
	{
		cout << string_list.at(i);
	}
	cout << endl ;
	
	cout << "done" << endl;
	return 0;
}
