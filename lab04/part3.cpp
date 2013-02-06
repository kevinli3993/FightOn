#include <vector>
#include <iostream>
#include <string>
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
	string_list.push_back("hello ");
	string_list.push_back("world ");
	string_list.push_back("again ");
	string_list.push_back("and ");
	string_list.push_back("again ");
	string_list.push_back("and ");
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
	cout << endl;
	
	string x = string_list[1];
	string_list[1] = "hi";
	cout << "done " << x << endl;
	cout << string_list[1];
	return 0;
}
