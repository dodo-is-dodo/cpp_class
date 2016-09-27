#include <iostream>

int main(int argc, char *argv[])
{
  for (int i = 7; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}
