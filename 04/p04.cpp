#include <iostream>

int main(int argc, char *argv[])
{
  std::string temp;
  int n = 19;
  std::cout << "Put in 20 positive number!\n";
  for (int i = 0; i < 20; i++) {
    std::cin >> temp;
    if (std::stoi(temp) <= 0)
    {
      std::cout << "it is not positive!!\n";
      break;
    }
  }
  return 0;
}
