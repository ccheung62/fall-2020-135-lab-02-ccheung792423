/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Input validation, Lab2A
Sample Input/ Output: 
$ ./valid
Please enter an integer: -10
Please re-enter: 1200
Please re-enter: 100
Please re-enter: 7

Number squared is 49

Write a program, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main () {
  int num;
  std::cout << "Please enter an integer: ";  //takes an user input
  std::cin >> num;
  while (num <=0 || num>=100) {  //checks if it is out of bound
    std::cout << "Please re-enter: ";
    std::cin >> num;
  }
  std::cout << "\nNumber squared is " << num*num << "\n"; //print the squared value
  return 0;
  
}
