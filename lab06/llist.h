#ifndef LLIST_H
#define LLIST_H
<<<<<<< HEAD
#include <cstddef>
=======
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1

template <typename T>
struct Item {
  T val;
  Item<T> *next;
};

template <typename T>
class LList {
 public:
  LList();
  ~LList();
  bool empty() const;
  int size() const;
<<<<<<< HEAD
  T& operator[](int loc);
=======
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  void push_back(const T& new_val);
  void pop_front();
  T& peek_front() const;
  //T& at(int loc) const;
  //bool remove(const T& val);
  void clear();
 private:
  Item<T> *getNodeAt(int loc) const;

<<<<<<< HEAD
 protected:
=======
 private:
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  Item<T> *head_;
};

// Write the constructor here
template <typename T>
LList<T>::LList()
{
<<<<<<< HEAD
	head_ = NULL;
=======

>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}




// Write the destructor here
template <typename T>
LList<T>::~LList()
{
  clear();
}

<<<<<<< HEAD
template <typename T>
T& LList<T>::operator[](int loc)
{
	Item<T>* temp = head_;
	if(head_->next == NULL)
		return head_->val;
	for (int i = 0; i < loc; i++)
	{	
		temp = temp->next;
	}
	return temp->val;
}
=======

>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1



template <typename T>
bool LList<T>::empty() const
{
<<<<<<< HEAD
	return (head_ == NULL);
=======


>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}

template <typename T>
int LList<T>::size() const
{
<<<<<<< HEAD
	int sizecount = 0;
	Item<T>* temp;
	if(empty())
		return sizecount;
	else
	{
		temp = head_;
		sizecount++;
	}
	
	
	while(temp->next != NULL)
	{
		temp = temp->next;
		sizecount++;
	}
	
	return sizecount;
=======



>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}

template <typename T>
Item<T>* LList<T>::getNodeAt(int loc) const
{
<<<<<<< HEAD
	Item<T> temp = head_;
	for (int i = 0; i < loc; i++)
	{
		if(head_->next == NULL)
			return NULL;
			
		temp = temp->next;
	}
	return temp;
}

template <typename T>
void LList<T>::push_back(const T& new_val)
{
	Item<T>* newItem = new Item<T>;
	newItem->val = new_val;
	newItem->next = NULL;
	
	if (empty())
		head_ = newItem;
	else
	{
		Item<T>* temp = head_;
	
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	
		temp->next = newItem;
	}
} 

template <typename T>
void LList<T>::pop_front()
{
	if (empty())
		return;
	Item<T>* temp = head_->next;
	delete head_;
	head_ = temp;
=======


}

template <typename T>
void LList<T>::push_back(T new_val)
{




} 

template <typename T>
T LList<T>::pop_front()
{


>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}

template <typename T>
T& LList<T>::peek_front() const
{
<<<<<<< HEAD
	return head_->val;
=======


>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}

//template <typename T>
//bool LList<T>::remove(const T& val)
//{
//
//}

//template <typename T>
//T& LList<T>::at(int loc) const
//{
//}


template <typename T>
void LList<T>::clear()
{
  while(head_ != NULL){
    Item<T> *temp = head_->next;
    delete head_;
    head_ = temp;
  }
}


#endif
