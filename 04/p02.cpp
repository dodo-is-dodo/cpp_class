#include <iostream>

int main(int argc, char *argv[])
{
  int temp;
  for (int i = 0; i < 7; i++) {
    temp = 1;
    for (int j = 0; j <= i; j++) {
      std::cout << temp++;
    }
    for (int j = 0; j < 7-i-1; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}
