#ifndef STACK_H
#define STACK_H
#include "llist.h"
#include <iostream>
#include <cstddef>

template <typename T>
class Stack: protected LList<T>
{
	public:
		Stack();
		~Stack();
		int size() const;
		void push(const T& value);
		void pop();
		T& top();
		bool empty() const;
//	private:
//		Item<T>* head_;
};

template <typename T>
Stack<T>::Stack()
{
	LList<T>::head_ = NULL;
}

template <typename T>
Stack<T>::~Stack()
{
	LList<T>::clear();
}

template <typename T>
int Stack<T>::size() const
{
	return LList<T>::size();
}

template <typename T>
void Stack<T>::push(const T& value)
{
	push_back(value);
}

template <typename T>
void Stack<T>::pop()
{	
	if(empty()) {
		return;
	}
	Item<T>* temp = LList<T>::head_;
	Item<T>* temp2 = NULL;
	while(temp->next != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		
	}
	delete temp;
	if(temp2 == NULL) 
	{
		this->head_ = NULL;
	} 
	else 
	{
		temp2->next = NULL;
	}
}

template <typename T>
T& Stack<T>::top()
{
	Item<T>* temp = LList<T>::head_;
	while(temp->next != NULL)
	{
		temp = temp->next;	
	}
	return temp->val;
}

template <typename T>
bool Stack<T>::empty() const
{
	return LList<T>::empty();
}

#endif




