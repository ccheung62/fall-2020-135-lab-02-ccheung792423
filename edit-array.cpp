/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Using arrays to store, update, and retrieve numbers, Lab2C
Sample Input/Output:
$ ./edit-array

1 1 1 1 1 1 1 1 1 1

Input index: 8
Input value: 99

1 1 1 1 1 1 1 1 99 1

Input index: 0
Input value: 300

300 1 1 1 1 1 1 1 99 1

Input index: 10
Input value: 5

Index out of range. Exit.

Write a program that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

1. Create an array myData of 10 integers.
2. Fill all its cells with value 1 (using a for loop).
3. Print all elements of the array on the screen.
4. Ask the user to input the cell index i, and its new value v.
5. If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>

int main () {
  int ind = 1;
  int val = 1;
  int myData[10];  //declare array
  for (int i=0; i<10; i++) { //sets the all the array values into 1
    myData[i] = 1;
  }
  std::cout << "\n";
  do {
    myData[ind] = val; //set inputted value into inputted index
    for (int i=0; i<10; i++){
      std::cout << myData[i] << " ";  //prints the array
    }
    std::cout << "\n\nInput index: ";  //ask for index input
    std::cin >> ind;
    std::cout << "Input value: ";  //ask for value input
    std::cin >> val;
    std::cout << "\n";
  }
  while (ind>=0 && ind<10); //checks if the inputted index is in range
  std::cout << "Index out of range. Exit.\n";
  return 0;
}

