/**********************************************************************
 * Simple linear search in C
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile (assuming gcc) : gcc -Wall LinearSearch.c -o LinearSearch.x
 * Run : ./LinearSearch.x
 **********************************************************************/

#include <stdio.h>

int linear_search_int(int *, size_t, int);
int linear_search_float(float *, size_t, float);

int main(){
    int i, key1;
    float key2;
    size_t size;
    int arr_int[10] = {3, 4, 23, 11, 67, 45, 12, 7, 78, 99};
    float arr_float[10] = {6.7, 14.5, 67.5, 4.4, 34.3,
                           7.3, 0.1, 2.0, 1.1, 0.2};
    
    printf("Searching through an integer array\n");
    key1  = 10;
    size = sizeof(arr_int)/sizeof(arr_int[0]);
    i = linear_search_int(arr_int, size, key1);
    if(i != -1){
        printf("Element %d found at index %d\n", key1, i);
    }else{
        printf("Element not found\n");
    }

    printf("\nSearching through a float array\n");
    key2  = 4.4;
    size = sizeof(arr_float)/sizeof(arr_float[0]);
    i = linear_search_float(arr_float, size, key2);
    if(i != -1){
        printf("Element %.1f found at index %d\n", key2, i);
    }else{
        printf("Element not found\n");
    }

    return 0;
}



int linear_search_int(int *arr, size_t n, int key){
    // Linear Search through integer array `arr`
    // Input :
    //      arr : integer array
    //      n   : length of array
    //      key : key to search
    // Output :
    //      index : index of the key if present
    //              if not present, return -1

    //Iterate through element of arr
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    //Key Not found
    return -1;
}

int linear_search_float(float *arr, size_t n, float key){
    // Linear Search through float array `arr`
    // Input :
    //      arr : float array
    //      n   : length of array
    //      key : key to search
    // Output :
    //      index : index of the key if present
    //              if not present, return -1

    //Iterate through element of arr
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    //Key Not found
    return -1;
}
