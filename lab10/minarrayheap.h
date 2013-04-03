#ifndef MINARRAYHEAP_H
#define MINARRAYHEAP_H

#include "minheap.h"
#include <vector>
#include <iostream>

/**
 * MinArrayHeap implements a min-heap using a vector as 
 * its container of data
 *
 * \note Location 0 of the heap array/vector will be empty
 *  
 */
template <typename T>
class MinArrayHeap : public MinHeap<T>
{ public:
   MinArrayHeap();
   MinArrayHeap(int *data, int size);
   void push(const T& item);
   T& top();
   void pop();
   int size() const;
   bool empty() const;
   void printHeap() const;
   bool decreaseKey(const T& item, const T& newVal);
 private: // member functions
   /// heapify is called rebuildHeap() in the textbook
   void heapify(int loc);
   void swap(int loc1, int loc2);
 private: // data members
   std::vector<T> items_;
};

template <typename T>
MinArrayHeap<T>::MinArrayHeap() : items_(1)
{

}

/** items_ is initialized with the values in the data array
 * \pre data[0] will serve as the empty value, so don't
 *             expect that value to be part of the heap
 */
template <typename T>
MinArrayHeap<T>::MinArrayHeap(int *data, int s) : 
       items_(data, data+s)
{ 
  //***************** Complete me ***********************
  // Implement code that will convert the values in the items_
  // array/vector to a valid heap using calls to heapify()
  // Take care not to try to heapify the value at location 0
	for(int i = size(); i >= 1; i--)
	{
		heapify(i);
	}
}

template <typename T>
void MinArrayHeap<T>::push(const T& item)
{
  // New data always gets put at the next empty location
  // in the heap (which is always the end of the array)
  // and then we'll move it to its correct heap locaiton
  items_.push_back(item);
  
  //***************** Complete me ***********************
  // Now move it into the right location to make a valid heap
  int i = items_.size()-1;
  int parent = i/2;
  while(parent >= 1 && items_[i] < items_[parent])
  {
  	swap(i,parent);
  	i = parent;
  	parent = i/2;
  }
}

template <typename T>
void MinArrayHeap<T>::swap(int loc1, int loc2)
{
	T item = items_[loc1];
	items_[loc1] = items_[loc2];
	items_[loc2] = item;
}

template <typename T>
T& MinArrayHeap<T>::top()
{
  //if(empty()) throw(std::out_of_range());
  return items_[1];
}

template <typename T>
void MinArrayHeap<T>::pop()
{
  items_[1] = items_.back();
  items_.pop_back();
  heapify(1);
}

template <typename T>
int MinArrayHeap<T>::size() const
{
  // since 0th spot is always empty, 
  //decrement the size of the vector by 1
  return items_.size()-1;
}

template <typename T>
bool MinArrayHeap<T>::empty() const
{
  // An empty heap has just 1 blank item 
  // which is the 0-th dummy location
  return (items_.size()-1) == 0;
}
template <typename T>
void MinArrayHeap<T>::heapify(int loc)
{
  //***************** Complete me ***********************
  // loc's children are both valid heaps but the value
  // at loc might be out of place, so make a valid heap
  // out of the item at loc and the subtree below it
  
  if (loc*2 > size()) return;	
  
  int smaller_child = 2*loc;
  if(loc*2+1 <= size())
  {
  	int right_child = smaller_child+1;
  	if(items_[right_child] < items_[smaller_child])
  	{
  		smaller_child = right_child;
  	}
  }
  if(items_[loc] > items_[smaller_child])
  {
  	swap(loc,smaller_child);
  	heapify(smaller_child);
  }
}

template <typename T>
void MinArrayHeap<T>::printHeap() const
{
  std::cout << "Heap array contents are: " << std::endl;
  for(unsigned int i=1; i < items_.size(); i++){
    std::cout << i << ": " << items_[i] << std::endl;
  }

}

template <typename T>
bool MinArrayHeap<T>::decreaseKey(const T& item, const T& newVal)
{
	bool changed = false;
	if(item < newVal) return changed;
	for(unsigned int i=1; i < items_.size(); i++)
	{
		if(items_[i] == item)
		{
			items_[i] = newVal;
			swap(i,1);
			int parent = i/2;
			while(parent >= 1&& items_[i] < items_[parent])
 			{
  				heapify(parent);
  				i = parent;
  				parent = i/2;
  			}
			changed = true;
			break;
		}
	}
	return changed;
}

#endif
