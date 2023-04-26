#include <iostream>
#include <iomanip>

void SelectionSort(int *array, int n){
  
  for(int i = 0; i < n-1; i++)
  {
    int smllst = i;
    for (int j = i+1; j < n; j++)
    {
      if (array[smllst]>array[j]) smllst = j;
    }
    std::swap(array[smllst],array[i]);
  }
}
int BinarySearch1(int *array,int beg,int end, int k ){
  //if beg > end the array is empty so return -1;
  // mid = beg + (end-beg)/2
  // if k is bigger than mid then
   // call  BinarySearch1 where beg is mid+1 
  // if k is smaller than mid then
    // call BinarySearch1 where end is mid-1
  //if k is equal to mid then 
    // returns mid
}

int BinarySearch(int *array,int n, int k ){
 return BinarySearch1(array,0,n-1,k);
}
  
void sortationMethod(int *array, int n){
  SelectionSort(array,n);
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
  int f = 5;
  int pos  = BinarySearch(array,n,f);
  std::cout << "Where is " << f << " in the array?" << std::endl;
  std::cout << "The number" << f << " is in the position " << pos <<std::endl;
}