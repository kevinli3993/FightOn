#include <iostream>
<<<<<<< HEAD
#include "llist.h"
=======
#include "llist_sol.h"
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1

using namespace std;

int main()
{
  LList<int> mylist;
<<<<<<< HEAD
  cout << "Size: " << mylist.size() << endl;
=======
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  mylist.push_back(5);
  mylist.push_back(6);
  mylist.push_back(7);
  cout << "Front item is: " << mylist.peek_front() << endl;
  cout << "Item at location 1 is " << mylist[1] << endl;
<<<<<<< HEAD
//  mylist.remove(6);
//  mylist.insert(0,4);
//  mylist.insert(3,8);
=======
  mylist.remove(6);
  mylist.insert(0,4);
  mylist.insert(3,8);
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  cout << "List contents (and removal)" << endl;
  cout << "Size: " << mylist.size() << endl;
  while(!mylist.empty()){
    cout << mylist.peek_front() << endl;
    mylist.pop_front();
<<<<<<< HEAD
    cout << "Size: " << mylist.size() << endl;
  }
mylist.pop_front();
=======
  }
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  return 0;
}
