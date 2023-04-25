#include <iostream>
#include <iomanip>
#include <algorithm>

void Bubble(int *array, int n){
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1/*the first one the biggest goes to the last position, so it's not needed to try the last one*/; j++)
    {
      if (array[j] > array[j+1])
      std::swap(array[j],array[j+1]);
    }
    
  }
  
}

void sortationMethod(int *array, int n){
  Bubble(array,n);
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