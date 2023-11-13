/**********************************************************************
 * Simple binary search in C
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile (assuming gcc) : gcc -Wall BinarySearch.c -o BinarySearch.x
 * Run : ./BinarySearch.x
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int binary_search(int [], size_t, int);

int main() {
  int arr[] = {2, 3, 6, 10, 14, 23, 33, 45, 56, 89, 90};
  int key, index;
  size_t size = sizeof(arr)/sizeof(arr[0]);

  key = 33;
  index = binary_search(arr, size, key);
  if(index != -1){
    printf("Key = %d; index = %d\n", key, index);
  }
  else{
    printf("Key = %d; index = NOT FOUND\n", key);
  }
  
  key = 123;
  index = binary_search(arr, size, key);
  if(index != -1){
    printf("Key = %d; index = %d\n", key, index);
  }
  else{
    printf("Key = %d; index = NOT FOUND\n", key);
  }

  return 0;
}

int binary_search(int arr[], size_t n, int key) {
  /*
   * Binary search through sorted array `arr`
   * Assumes sorted array.
  */
  int a, b, c;

  a = 0;
  b = n;
  if(arr[a] == key) return a;
  if(arr[b] == key) return b;
  c = (a + b)/2;
  while(arr[c] != key && c!=a && c!=b) {
    if(arr[c] < key) {
      a = c;
    }
    else if(arr[c] > key) {
      b = c;
    }
    c = (a + b)/2;
  }
  if(arr[c] == key) {
    return c;
  }
  else{
    return -1;
  }


}
