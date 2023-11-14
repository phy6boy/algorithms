##############################################################
# Simple algorithm for binary search in python
# Author : Muhamed Muhsin A. <muhsinibnalazeez@gmail.com>
# 
# Run : python BinarySearch.py
##############################################################

def binary_search(arr, key):
    """
    Binary search through array `arr`
    Input :
        arr : Array
        key : key to search
    Output :
        index : The index of position where the key occur
                returns -1 if not found
    """
    
    a = 0
    b = len(arr)-1
    if arr[a] == key :
        return a
    if arr[b] == key :
        return b
    c = (a + b)//2
    while arr[c] != key and c > a and c < b:
        if arr[c] > key :
            b = c
        elif arr[c] < key :
            a = c
        c = (a + b)//2

    if arr[c] == key :
        return c
    return -1

##############################################################
if __name__ == "__main__" :
    arr = [2, 3, 6, 10, 14, 23, 33, 45, 56, 89, 90]
    
    key = 33
    index = binary_search(arr, key)
    if index != -1:
        print(f"Key = {key}; index = {index}")
    else :
        print(f"Key = {key}; index = NOT FOUND")

    key = 123
    index = binary_search(arr, key)
    if index != -1:
        print(f"Key = {key}; index = {index}")
    else :
        print(f"Key = {key}; index = NOT FOUND")
