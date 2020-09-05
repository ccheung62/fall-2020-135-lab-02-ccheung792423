/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Print all integers from the requested interval, Lab2B
Sample Input/Output: 
$ ./print-interval

-5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9

Write a program that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>
#include "funcs.h"

int main () {
  print_interval(-5, 10);
  print_interval(3, 12);
  print_interval(6, 8);
  print_interval(-12, -6);
  print_interval(-15, -13);
  return 0;
}
