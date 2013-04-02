template <class T>
class MyList
{
	private:
		int size_;
		int max_size_;
		T* entity_;
	public:
		MyList();
		~MyList();
		T operator[](int loc);
		void push_back(T name);
		int size() const;
		bool remove (T val);
		T pop(int loc);
		T at(int loc) const;		
};


template <class T>
MyList<T>::MyList()
{
	max_size_ = 5;
	size_ = 0;
	entity_ = new T[max_size_];
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
			new_name_array[i] = entity_[i];
		}
		delete [] entity_;
		entity_ = new_name_array;
	}   
	entity_[size_] = name;
	size_++;
}

template <class T>
bool MyList<T>::remove(T val)
{
	bool removed = false;
	int location_;
	for(int i = 0; i < size_; i++)
	{
		if(entity_[i] == val)
		{
			location_ = i;
			removed = true;
			size_--;
			break;
		}
	}
	if(removed)
	{
		for(int i = location_; i < size_; i++)
		{
			entity_[location_] = entity_[location_+1];
		}
	}
	return removed;
}

template <class T>
T MyList<T>::pop(int loc)
{
	if(loc >= size_ || loc < 0)
	{
		throw loc;
	}	
	T poped = entity_[loc];
	size_--;
	for(int i = loc; i < size_; i++)
	{
		entity_[loc] = entity_[loc+1];
	}
	entity_[size_] = 0;
	return poped;		
}

template <class T>
int MyList<T>::size() const
{
	return size_;
}

template <class T>
T MyList<T>::at(int loc) const
{
	if (loc < 0 || loc >= size_) throw loc;
	return entity_[loc];
}

template <class T>
T MyList<T>::operator[](int loc)
{
	return entity_[loc];
}

