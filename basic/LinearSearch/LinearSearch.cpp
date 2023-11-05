/**********************************************************************
 * Simple linear search in C++
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile (assuming gcc) : g++ -Wall LinearSearch.cpp -o LinearSearch.x
 * Run : ./LinearSearch.x
 **********************************************************************/

#include <iostream>

template <typename T>
int linear_search(T *arr, size_t n, T key){
    // Linear Search through array `arr`
    // Input :
    //      arr : Array
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


int main(){
    int i, key1;
    float key2;
    size_t size;
    int arr_int[10] = {3, 4, 23, 11, 67, 45, 12, 7, 78, 99};
    float arr_float[10] = {6.7, 14.5, 67.5, 4.4, 34.3,
                           7.3, 0.1, 2.0, 1.1, 0.2};
    
    std::cout << "Searching through an integer array" << std::endl;
    key1  = 10;
    size = sizeof(arr_int)/sizeof(arr_int[0]);
    i = linear_search<int>(arr_int, size, key1);
    if(i != -1){
        std::cout << "Element " << key1 << " found at index " << i << std::endl;
    }else{
        std::cout << "Element not found" << std::endl;
    }

    std::cout << std::endl << "Searching through a float array" << std::endl;
    key2  = 4.4;
    size = sizeof(arr_float)/sizeof(arr_float[0]);
    i = linear_search<float>(arr_float, size, key2);
    if(i != -1){
        std::cout << "Element " << key2 << " found at index " << i << std::endl;
    }else{
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
