# include "funcs.h"
# include <iostream>

void print_interval(int L, int U) {
  for (int i = L; i<U; i++) {  
    std:: cout << i << " ";  //prints and increase i until it reaches U
  }
  std::cout << "\n";
}
