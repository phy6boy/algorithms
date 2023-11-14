/**********************************************************************
 * Simple linear search in C++
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile (assuming gcc) : g++ -Wall BinarySearch.cpp -o BinarySearch.x
 * Run : ./BinarySearch.x
 **********************************************************************/

#include <iostream>

template <typename T>
int binary_search(T arr[], size_t n, T key) {
  // Binary search through sorted array `arr`
  // Assumes that arr is sorted. 
  // Input :
  //        arr :: Array of objects with >,<,== operators overloaded
  //        n   :: length of the array
  //        key :: key to search
  // Output :
  //        index :: index of the key if present. 
  //                 if not present, return -1
  int a = 0, b = n-1, c;
  if(arr[a] == key) return a;
  if(arr[b] == key) return b;

  c = (a + b)/2;
  while(arr[c] != key && c<b && c>a) {
    if(arr[c]<key){
      a = c;
    }
    else if(arr[c] > key){
      b = c;
    }
    c = (a + b)/2;
  }
  if(arr[c] == key) return c;
  return -1;
}

int main() {
  int arr[] = {2, 3, 6, 10, 14, 23, 33, 45, 56, 89, 90};
  int key, index;
  size_t size = sizeof(arr)/sizeof(arr[0]);

  key = 33;
  index = binary_search<int>(arr, size, key);
  if(index != -1){
    printf("Key = %d; index = %d\n", key, index);
  }
  else{
    printf("Key = %d; index = NOT FOUND\n", key);
  }
  
  key = 123;
  index = binary_search<int>(arr, size, key);
  if(index != -1){
    printf("Key = %d; index = %d\n", key, index);
  }
  else{
    printf("Key = %d; index = NOT FOUND\n", key);
  }

  return 0;
}
