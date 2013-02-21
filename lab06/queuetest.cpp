#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
	Queue<int> mylist;
	cout << "Pushing Back" << endl;
	mylist.push_back(9);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(22);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(13);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Popping Front" << endl;
	mylist.pop_front();
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(7);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(4);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Popping Front" << endl;
	mylist.pop_front();
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Popping Front" << endl;
	mylist.pop_front();
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(2);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Pushing Back" << endl;
	mylist.push_back(49);
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	cout << "Popping Front" << endl;
	mylist.pop_front();
	cout << "Front Value: " << mylist.front() << endl;
	cout << "Back Value: " << mylist.back() << endl << endl;
	
	cout << "Clearing List.........................." << endl << endl;
	for(int i = 0; i < mylist.size(); i++)
	{
		mylist.pop_front();
	}
	
	mylist.push_back(49);
	mylist.push_back(49);
	mylist.push_back(49);
	mylist.push_back(49);
	mylist.push_back(49);
	return 0;
}
