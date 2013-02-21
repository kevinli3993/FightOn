#ifndef QUEUE_H
#define QUEUE_H
#include "llist.h"
#include <iostream>
#include <cstddef>

template <typename T>
class Queue: protected LList<T>
{
	public:
		Queue();
		~Queue();
		int size() const;
		void push_back(const T& value);
		void pop_front();
		T& front();
		T& back();
		bool empty() const;
};

template <typename T>
Queue<T>::Queue()
{
	LList<T>::head_ = NULL;
}

template <typename T>
Queue<T>::~Queue()
{
	LList<T>::clear();
}

template <typename T>
int Queue<T>::size() const
{
	return LList<T>::size();
}

template <typename T>
void Queue<T>::push_back(const T& value)
{
	LList<T>::push_back(value);
}

template <typename T>
void Queue<T>::pop_front()
{	
	if(empty())
		return;
	LList<T>::pop_front();
}

template <typename T>
T& Queue<T>::front()
{
	return LList<T>::peek_front();
}

template <typename T>
T& Queue<T>::back()
{
	Item<T>* temp = this->head_;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	return temp->val;
}

template <typename T>
bool Queue<T>::empty() const
{
	return LList<T>::empty();
}

#endif




