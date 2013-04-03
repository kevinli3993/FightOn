#include <iostream>
#include <cstdlib>
#include "minarrayheap.h"
using namespace std;

const int MAXVAL = 1024;

void genRandArray(int *data, int len)
{
  for(int i=0; i < len; i++){
    data[i] = rand() % MAXVAL;
  }
}

void printArray(int *data, int len)
{
  cout << "Array contents are: " << endl;
  for(int i=1; i < len; i++){
    cout << data[i] << endl;
  }
}
int main(int argc, char* argv[])
{
  if(argc < 3){
    cerr << "Please provide the size of the array and a random seed number" << endl;
    return 1;
  }
  int size = atoi(argv[1]);
  int seed = atoi(argv[2]);
  srand(seed);

  int *data = new int[size];
  genRandArray(data, size);
  
  printArray(data, size);

  MinArrayHeap<int> h(data, size);
  
  // Eventually add some pushes here
  h.push(1);
  h.push(MAXVAL/2);
  h.push(MAXVAL);
  
  h.printHeap();
  
  cout << endl;
  int normal, newValue;
  cout << "Enter the value you want to decrease: ";
  cin >> normal;
  cout << "Enter the decrease value: ";
  cin >> newValue;
  bool changed = h.decreaseKey(normal,newValue);

  if(changed)
  {
  	cout << "The value was changed." << endl;
  }
  else
  {
  	cout << "The value was not changed." << endl;
  }
  
  cout << "Heap contents as they are popped: " << endl;
  while( !h.empty() ){
    cout << h.top() << endl;
    h.pop();
  }
  delete [] data;

  return 0;
}
