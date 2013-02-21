#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
	Queue<int> myqueue;
	Stack<int> mystack;
	int choice;
	int value;
	bool exitstatus = false;
	
	while(!exitstatus)
	{
		cout << "1. Push to stack" << endl;
		cout << "2. Print and pop top of stack" << endl;
		cout << "3. Push to queue" << endl;
		cout << "4. Print and pop front of queue" << endl;
		cout << "5. Quit" << endl;
		cout << "Enter an integer: ";
		cin >> choice;
		switch(choice)
		{
			case 1:
				cout << endl << "Type an integer to push to stack:";
				cin >> value;
				mystack.push(value);
				break;
			case 2:
				cout << endl << "Printing top of stack: " << mystack.top() << endl;
				cout << "Popping Top" << endl;
				mystack.pop();
				break;
			case 3:
				cout << endl << "Type an integer to push to queue:";
				cin >> value;
				myqueue.push_back(value);
				break;
			case 4:
				cout << endl << "Printing front of queue: " << myqueue.front() << endl;
				cout << "Popping front" << endl;
				myqueue.pop_front();
				break;
			case 5:
				exitstatus = true;
				break;
		}
	}
	
	return 0;
}
