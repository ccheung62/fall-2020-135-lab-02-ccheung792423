/*
Author: Cheuk Lam Cheung
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…, Lab2D
Sample Output:
0 
1 
1 
2 
3 
5 
8 
13 
...
Write a program, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

int main () {
  int fib[60];
  fib[0] = 0;  //set the first two number
  fib[1] = 1;
  std::cout<< "0\n1\n";
  for(int i=2; i<60; i++) {
    fib[i]=fib[i-1] + fib[i-2]; //creates the sequence and prints it
    std::cout << fib[i] << "\n";
  }
  return 0;
}

/* it goes into the negative on the 47th and differs from the fibonacci numbers
 */
