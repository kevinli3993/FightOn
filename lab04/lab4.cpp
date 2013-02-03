#include <vector>
#include <iostream>
#include <string>

using namespace std;

class List
{
	private:
		int size_;
		int max_size_;
		string* names_;
	public:
		List();
		~List();
		void push_back(string name);
		int size() const;
		string at(int loc) const;		
};

List::List()
{
	max_size_ = 5;
	size_ = 0;
	names_ = new string[max_size_];
}

List::~List()
{
	delete names_;
}

void List::push_back(string name)
{
	if (size_ == max_size_)
	{
		string* new_name_array = new string[max_size_*=2];
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

int List::size() const
{
	return size_;
}

string List::at(int loc) const
{
	if(loc >= size_ || loc<0 )
	{
		return "failed";
	}
	return names_[loc];
}

int main()
{
	return 0;
}
