//#include "llist.h"
#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
	Stack<int> mystack;
	mystack.push(0);
	cout << mystack.top() << endl;
	mystack.push(1);
	cout << mystack.top() << endl;
	mystack.push(2);
	cout << mystack.top() << endl;
	mystack.push(3);
	cout << mystack.top() << endl;
	mystack.push(4);
	cout << mystack.top() << endl;
	mystack.push(5);
	cout << mystack.top() << endl;
	mystack.push(6);
	cout << mystack.top() << endl;
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	
	cout << endl << "Re-adding" << endl;
	
	mystack.push(9);
	cout << mystack.top() << endl;
	mystack.push(6);
	cout << mystack.top() << endl;
	mystack.push(8);
	cout << mystack.top() << endl << endl; 
	
	cout << "Deleting: " << endl;
	
	for(int i = 0; i < mystack.size(); i++)
	{
		cout << mystack.top() << endl;
		mystack.pop();
	}
	
	return 0;
}
