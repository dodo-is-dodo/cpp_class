#include <iostream>

int main(int argc, char *argv[])
{
  int temp = -9;
  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 8 - abs(temp) + 2 ; j++)
        {
          std::cout << "*";
        }
      std::cout << "\n";
      temp += 2;
    }
  
  return 0;
}
