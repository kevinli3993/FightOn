#include <vector>
#include <iostream>
#include <string>

using namespace std;

template <class T>
class MyList
{
	private:
		int size_;
		int max_size_;
		T* names_;
	public:
		MyList();
		~MyList();
		void push_back(T name);
		int size() const;
		T at(int loc) const;		
};

template <class T>
MyList<T>::MyList()
{
	max_size_ = 5;
	size_ = 0;
	names_ = new T[max_size_];
}

template <class T>
MyList<T>::~MyList()
{
}

template <class T>
void MyList<T>::push_back(T name)
{
	if (size_ == max_size_)
	{
		T* new_name_array = new T[max_size_*=2];
		for (int i = 0; i < size_; i++)
		{
			new_name_array[i] = names_[i];
		}
		delete [] names_;
		names_ = new_name_array;
	}   
	names_[size_] = name;
	size_++;
}

template <class T>
int MyList<T>::size() const
{
	return size_;
}

template <class T>
T MyList<T>::at(int loc) const
{
	return names_[loc];
}

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
	cout << endl ;
	
	cout << "done" << endl;
	return 0;
}
