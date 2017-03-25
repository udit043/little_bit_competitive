// partial_sum example

#include <iostream>     // std::cout
#include <numeric>      // std::partial_sum

int main () 
{
  int val[] = {0,0,0,1,1,1,1,2,2,3,4,5,11,20,24,48,96,100};
  int result[18];

  std::partial_sum (val, val+18, result);
  std::cout << "using default partial_sum: ";
  for (int i=0; i<18; i++) std::cout << result[i] << ' ';
  std::cout << '\n';

  return 0;
}

/*
  #include <functional>   // std::multiplies

  int myop (int x, int y) {return x+y+1;}

  std::partial_sum (val, val+5, result, std::multiplies<int>());
  std::cout << "using functional operation multiplies: ";
  for (int i=0; i<5; i++) std::cout << result[i] << ' ';
  std::cout << '\n';

  std::partial_sum (val, val+5, result, myop);
  std::cout << "using custom function: ";
  for (int i=0; i<5; i++) std::cout << result[i] << ' ';
  std::cout << '\n';
*/