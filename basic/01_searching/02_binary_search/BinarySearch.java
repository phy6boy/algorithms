/**********************************************************************
 * Simple Binary search in Java
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile : javac BinarySearch.java
 * Run : java BinarySearch
 **********************************************************************/

public class BinarySearch {
  static int binarySearch(int[] arr, int key) {
    int a = 0;
    int b = arr.length - 1;
    if(arr[a] == key){
      return a;
    }
    if(arr[b] == key){
      return b;
    }
    int c = (a + b)/2;
    while(arr[c] != key && c > a && c < b){
      if(arr[c] > key){
        b = c;
      }
      else if(arr[c] < key){
        a = c;
      }
      c = (a + b)/2;
    }
    if(arr[c] == key){
      return c;
    }
    return -1;
  }

  public static void main(String[] args){
    int i, key;
    int[] arr = {2, 3, 6, 10, 14, 23, 33, 45, 56, 89, 90};
    key = 33;
    i = binarySearch(arr, key);
    if(i != -1){
      System.out.println("Key = " + key + "; index = " + i);
    }
    else{
      System.out.println("Key = " + key + "; index = NOT FOUND");
    }

    key = 123;
    i = binarySearch(arr, key);
    if(i != -1){
      System.out.println("Key = " + key + "; index = " + i);
    }
    else{
      System.out.println("Key = " + key + "; index = NOT FOUND");
    }
  }
}
