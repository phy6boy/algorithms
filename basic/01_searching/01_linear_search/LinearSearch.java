/**********************************************************************
 * Simple linear search in Java
 * Author : Muhammed Muhsin A. <muhsinibnalazeez@gmail.com>
 *
 * Compile : javac LinearSearch.java
 * Run : java LinearSearch
 **********************************************************************/

public class LinearSearch {
  
  static int linearSearch(int[] arr, int key){
    for (int i=0; i< arr.length; i++) {
      if(arr[i] == key) {
        return i;
      }
    }
    return -1;
  }
  static int linearSearch(float[] arr, float key){
    for (int i=0; i<arr.length; i++) {
      if(arr[i] == key) {
        return i;
      }
    }
    return -1;
  }

  public static void main(String[] args){
    int i, key1;
    float key2;
    int[] arr_i   = {6, 55, 34, 11, 99, 67, 4, 34, 12, 3};
    float[] arr_f = {6.5f, 4.3f, 2.0f, 8f, 90.0f, 3.1f, 2.2f, 89.9f, 5.6f, 34.3f};

    System.out.println("searching through an integer array");
    key1 = 34;
    i = linearSearch(arr_i, key1);
    if(i != -1){
        System.out.println("Element " + key1 + " found at index " + i);
    }else{
        System.out.println("Element not found");
    }

    System.out.println("searching through a float array");
    key2 = 3.3f;
    i = linearSearch(arr_f, key2);
    if(i != -1){
        System.out.println("Element " + key2 + " found at index " + i);
    }else{
        System.out.println("Element not found");
    }

 }
}
