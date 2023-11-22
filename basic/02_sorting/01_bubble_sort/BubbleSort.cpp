/**********************************************************************
 * Simple bubble sort in C++
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile (assuming gcc) : g++ -Wall BubbleSort.cpp -o BubbleSort.x
 * Run : ./BubbleSort.x
 **********************************************************************/

#include <iostream>

void swap(int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void bubble_sort(int arr[], int n) {
  /*
    * Function bubble_sort
    * sort the arr of size n using Bubble Sort 
    * the arr is updated inplace
    */
  int i, j;
  enum Boolean swapped = FALSE;
  for(i=0; i<n-1; i++) {
    for(j=0; j<n-i-1; j++) {
      if(arr[j] > arr[j+1]){
        swap(arr+j, arr+j+1);
        swapped = TRUE;
      }
    }
    if(swapped == FALSE) break;
  }
}

void print_arr(int arr[], int n) {
  printf("[ ");
  for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");
}

int main(int argc, char *argv[])
{
  int arr[] = {45, 3, 23, 11, 89, 13, 133, 76, 15, 10, 9, 47};
  int n     = sizeof(arr)/sizeof(arr[0]);
  printf("Before sorting : \n");
  print_arr(arr, n);

  bubble_sort(arr, n);

  printf("\nAfter sorting : \n");
  print_arr(arr, n);

  return 0;
}
