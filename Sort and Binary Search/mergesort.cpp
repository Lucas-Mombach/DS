#include <iostream>
#include <iomanip>
#include <algorithm>
void merge(int *array,int p, int q,int r){
  int size =  p-r;
  int *aux =  new int[size];
  int min_p = p;
  int min_q = q;
  //min_p and min_q
  int i=p;
  while (min_p >q && min_q > r){
    if(array[min_p]> array[min_q]){
      aux[i] = array[min_q];
      min_q++; 
      i++;
    }
    else
    aux[i] = array[min_p];
    i++;
    min_p++;
  }
   
  while (min_p<q)
  {
    aux[i]= array[min_p];
    i++; min_p++;
  }
  while (min_q<r)
  {
    aux[i]= array[min_q];
    i++; 
    min_q++;
  }
 for(int j = p;j<size;j++)
  array[j+p]=aux[j];
  delete []aux;
  
}
void mergeSort(int *array,int p,int r){
  
  //if p < r-1 then { get the middle with (r+p)/2
  //call mergeSort(array,p,q)
  //call mergeSort(array,q+1,r)
  //call merge(array,p,mid,q)}

}

void mergeSort(int *array,int n){
  return mergeSort(array,0,n);
}

void sortationMethod(int *array, int n){
  mergeSort(array,n);
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