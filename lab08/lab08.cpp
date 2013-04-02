<<<<<<< HEAD

#include <iostream>
#include <ctime>
#include <cstdlib>

=======
#include <iostream>
#include <ctime>
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
using namespace std;

// Linked list item struct
struct Item {
  int value;
  Item *next;
};

<<<<<<< HEAD
int arraySequentialSearch( int value );
Item *linkedSequentialSearch( int value );
int arrayBinarySearch( int value );
void populateLinkedList();
void populateArrayList();
void selectionSort();
void merge(int s1, int e1, int s2, int e2);
void msort(int start, int end);
void mergesort();



// Global declarations of an array and linked list head pointer
const int MAXSIZE = 500;
int list[MAXSIZE];
Item *head;

int main() {
  clock_t start, finish;
  double duration;
  cout << "List size of " << MAXSIZE << endl;

  //Put data into the two types of lists
  populateArrayList();
  populateLinkedList();
  
  Item* temp;
  temp = head;
  while(temp->next != NULL)
  {
  	cout << temp->value << endl;
  	temp = temp->next;
  }

  start = clock();

  selectionSort();// Add your call to either selection or merge sort here.
//	mergesort();

  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Total CPU for sort time: "<<duration<<endl;

  // Write a for loop to check that data in your array is
  // in sorted order
/*	for(int i = 0; i < MAXSIZE; i++)
	{
		cout << "Value " << i << ": " << list[i] << endl;
	}*/






  //Let's start off with a value not in the list and see how long it takes.
  int numiters = 100000;
  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    arraySequentialSearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU for array sequential search time: "<<duration/numiters<<endl;

  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    linkedSequentialSearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU for linked sequential search time: "<<duration/numiters<<endl;

  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    arrayBinarySearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU time for array binary searches time: "<<duration/numiters<<endl;


  return 0;
}

=======
// Global declarations of an array and linked list head pointer
const int MAXSIZE = 50000;
int list[MAXSIZE];
Item *head;

>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
int arraySequentialSearch( int value ) {
  //An array-based sequential search algorithm. Returns the index position
  //of the value being searched for if found and returns -1 otherwise
  for ( int loc=0; loc<MAXSIZE; loc++ ) {
    if ( list[loc] == value ) {
      return loc;
    }
  }

  return -1;
}

Item *linkedSequentialSearch( int value ) {
  //An linked-list-based sequential search algorithm. Returns a pointer to the item
  //containing the value if found and a null otherwise
  Item *current = head;

  while ( current != NULL ) {
    if ( current->value == value ) {
      return current;
    }

    current = current->next;
  }

  return NULL;
}

int arrayBinarySearch( int value ) {
  //An array-based binary search algorithm. Returns the index position
  //of the value being searched for if found and returns -1 otherwise
  int first=0, last=MAXSIZE-1, mid;

  while ( first <= last ) {
    mid = (first + last) / 2;

    if ( list[mid] == value ) {
      //Found it
      return mid;
    }

    //Haven't found it, yet. Determine which sublist to continue with and
    //adjust first or last
    if ( list[mid] > value ) {
      //Go left, so adjust last to be mid-1
      last = mid - 1;
    } else {
      //Go right, so adjust first to be mid+1
      first = mid + 1;
    }
  }

  return -1;
}



// **************** CHANGE ME ************************
// Change the code to populate data with random numbers
// between 0 and 1,000,000 and insert them in sorted order
<<<<<<< HEAD

void populateLinkedList() 
{
	//Appends MAXSIZE even numbers in the list
	Item *temp, *last, *temp2, *prev;

 	 //Create the first item so that in the for loop we don't
 	 //have to check for head == NULL
 	head = new Item;
 	head->value = rand()%1000001;
 	head->next = NULL;
 	last = head;

 	for (int i=1; i<MAXSIZE; i++ )
 	{
 	 	temp = new Item;
    		temp->value = rand()%1000001;
    		temp2 = head;
    		temp->next = NULL;
    		prev = NULL;
    		//compare values and insert
    		
    		if(head->next == NULL)
    		{
    			if(head->value > temp->value)
    			{
    				temp->next = head;
    				head = temp;
    			}
    			else
    			{
    				head->next = temp;
    				last = temp;
    			}
    		}
    		else
    		{	
    			while(temp2->value < temp->value && temp2->next != NULL)
    			{
    				prev = temp2;
    				temp2 = temp2->next;
    			}
    			
    			if(prev == NULL)
    			{
    				temp->next = head;
    				head = temp;
    			}
    			else if(temp2->next == NULL)
    			{
    				last->next = temp;
    				last = temp;
    			}
    			else
    			{
    				prev->next = temp;
    				temp->next = temp2;
    			}
    		}
    		
  	}
=======
void populateLinkedList() {
  //Appends MAXSIZE even numbers in the list
  Item *temp, *last;

  //Create the first item so that in the for loop we don't
  //have to check for head == NULL
  head = new Item;
  head->value = 0;
  head->next = NULL;
  last = head;

  for ( int i=1; i<MAXSIZE; i++ ) {
    temp = new Item;
    temp->value = 2*MAXSIZE-i*2;
    temp->next = NULL;
    last->next = temp; //This is where we actually add the new item on the end of the list
    last = temp;       //Now move last to point to the new last item in the list
  }
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
}

// **************** CHANGE ME ************************
// Change the code to populate data with random numbers
// between 0 and 1,000,000
<<<<<<< HEAD

void populateArrayList() {
  //Puts MAXSIZE even numbers in the list
  for ( int i=0; i<MAXSIZE; i++ ) {
    list[i] = rand()%1000001;
    
=======
void populateArrayList() {
  //Puts MAXSIZE even numbers in the list
  for ( int i=0; i<MAXSIZE; i++ ) {
    list[i] = 2*MAXSIZE-i*2;
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
  }
}

// **************** WRITE ME ************************
// Add your code (function(s)) to implement Selection Sort

<<<<<<< HEAD
void selectionSort()
{
	int number_swap, tempIndex;
	for(int i = 0; i < MAXSIZE-1; i++)
	{
		tempIndex = i;
		for(int j = i+1; j < MAXSIZE; j++)
		{
			if(list[tempIndex] > list[j])
			{
				tempIndex = j;
			}
		}
		if(i != tempIndex)
		{
			number_swap = list[tempIndex];
			list[tempIndex] = list[i];
			list[i] = number_swap;
		}
	}
}


void merge(int s1, int e1, int s2, int e2)
{
	int* temp = new int[e2-s1+1];
	
	for(int i = 0; i < e2-s1+2; i++)
	{
		if((list[s1] < list[s2] || s2>=e2) && s1 <= e1)
		{
			temp[i] = list[s1];
			s1++;
		}
		else
		{
			temp[i] = list[s2];
			s2++;
		}
	}
	
	for(int j = s1; j<=e2; j++)
	{
		list[j] = temp[j-s1];
	}
	delete [] temp;
}

void msort(int start, int end)
{
	int mid = (start + end)/2;
	if(start-end > 1)
	{
		msort(start, mid);
		msort(mid+1, end);
	}
	merge(start, mid, mid+1, end);
}

void mergesort()
{
	msort(0,MAXSIZE);
}

// **************** WRITE ME ************************
// Add your code (function(s)) to implement Merge Sort
=======



// **************** WRITE ME ************************
// Add your code (function(s)) to implement Merge Sort
int other[MAXSIZE];


int main() {
  clock_t start, finish;
  double  duration;
  cout << "List size of " << MAXSIZE << endl;

  //Put data into the two types of lists
  populateArrayList();
  populateLinkedList();

  start = clock();

  // Add your call to either selection or merge sort here.



  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Total CPU for sort time: "<<duration<<endl;

  // Write a for loop to check that data in your array is 
  // in sorted order







  //Let's start off with a value not in the list and see how long it takes.
  int numiters = 100000;
  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    arraySequentialSearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU for array sequential search time: "<<duration/numiters<<endl;

  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    linkedSequentialSearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU for linked sequential search time: "<<duration/numiters<<endl;

  // Start the stopwatch
  start = clock();
  for ( int i=0; i<numiters; i++ ) {
    arrayBinarySearch( 2*MAXSIZE );
  }
  // Measure the elapsed CPU time, and print.
  finish = clock();
  duration = (double)(finish - start) / CLOCKS_PER_SEC;
  cout <<"Average CPU time for array binary searches time: "<<duration/numiters<<endl;


  return 0;
}
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1

