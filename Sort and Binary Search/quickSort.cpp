#include <iostream>
#include <iomanip>
#include <algorithm>
int partition(int *array,int beg,int end, int pivot){
  
  return pivot;
}
void quick(int *array,int beg, int end){
  // if the array is empty return;
  // get the new pivot by p = partition(array,beg,end,end-1);
  //call quick(array,beg,p) to use quick sort in the left side
  //call quick(array,p+1,end) to use quick sort in the right side
  //
}

void QuickSort(int *array,int n){
  return quick(array,0,n);
}

void sortationMethod(int *array, int n){
  QuickSort(array,n);
}
//same main for every sortation method
int main(){
  int n = 5;
  int *array = new int(n);
  array[0] = 5;
  array[1] = 2;
  array[2] = 3;
  array[3] = 8;
  array[4] = 1;
  std::cout << "Unsorted array: " << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }

  sortationMethod(array,n);

  std::cout << "\nSorted array: " << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << "\n" << std::endl;
}