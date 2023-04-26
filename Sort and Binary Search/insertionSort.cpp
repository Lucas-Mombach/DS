#include <iostream>
#include <iomanip>

void insertionSort(int *array, int n){

  for (int i = 0; i < n-1; i++)
  {
    int aux = array[i+1];
    for (int j = i+1; j > 0; j--)
    {
      if (array[j] < array[j-1]) 
      {

        array[j] = array[j-1];
        array[j-1] = aux;
        

      } 
    }
    
  }
   
}
  

void sortationMethod(int *array, int n){
  insertionSort(array,n);
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