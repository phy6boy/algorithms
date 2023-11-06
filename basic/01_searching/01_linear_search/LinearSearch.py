##############################################################
# Simple algorithm for linear search in python
# Author : Muhamed Muhsin A. <muhsinibnalazeez@gmail.com>
# 
# Run : python LinearSearch.py
##############################################################

from typing import Union, Sequence

def linear_search(arr: Sequence[Union[int, float]],
                  key: Union[int, float]) -> int:
    """
    Linear Search through Array `arr`
    Input :
        arr :: List of int | float
        key :: Element to search (int | float)
    Output :
        index :: The index of the position where the key 
        occure at first place. returns -1 if not found
    """
    
    # Iterae through the element of arr
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    # key not found
    return -1


#################################################################
if __name__ == "__main__":
    arr_int   = [2, 4, 5, 6, 7, 8, 9, 19, 78, 88, 199, 6]
    arr_float = [4.5, 7.8, 6.8, 9.5, 7.0]
    
    print("Searching through an integer array")
    key: Union[float, int] = 19
    index = linear_search(arr_int, key)
    if index != -1 :
        print(f"Element {key} found at index {index}")
    else :
        print("Element not found")
    
    print()
    print("Searching through a float array")
    key = 1.1
    index = linear_search(arr_float, key)
    if index != -1 :
        print(f"Element {key} found at {index}")
    else :
        print("Element not found")

