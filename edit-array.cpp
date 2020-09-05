/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Using arrays to store, update, and retrieve numbers, Lab2C

Write a program that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

1. Create an array myData of 10 integers.
2. Fill all its cells with value 1 (using a for loop).
3. Print all elements of the array on the screen.
4. Ask the user to input the cell index i, and its new value v.
5. If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>

int main () {
  int myData[10];  
  std::cout << "\n";
  for (int i=0; i<10; i++) { 
    myData[i] = 1;
    std::cout << myData[i] << " ";
  }
  int ind;
  int val;
  std::cout << "\n\nInput index: ";  
  std::cin >> ind;
  std::cout << "Input value: ";
  std::cin >> val;
  std::cout << "\n";
  while (ind>=0 && ind<10){ 
    myData[ind] = val;
    for (int i=0; i<10; i++){
      std::cout << myData[i] << " ";
    }
    std::cout << "\n\nInput index: ";
    std::cin >> ind;
    std::cout << "Input value: ";
    std::cin >> val;
    std::cout << "\n";
  }
  std::cout << "Index out of range. Exit.\n";
  return 0;
}
