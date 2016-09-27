#include <iostream>

int factorial(int n)
{
  int sum = 1;
  while (n)
    sum *= n--;
  return sum;
}

int main(int argc, char *argv[])
{
  std::cout <<  factorial(10);
  
  
  return 0;
}
