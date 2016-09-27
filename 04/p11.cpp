#include <iostream>

int main(int argc, char *argv[])
{
  int n;
  std::string temp;
  double n1, n2;
  int state = 1;
  
  while (state)
  {
    std::cout << "(1) Add" << "\n";
    std::cout << "(2) Subtract" << "\n";
    std::cout << "(3) Multiply" << "\n";
    std::cout << "(4) Divide" << "\n";
    std::cout << "(5) Exit" << "\n";
    std::cout << "Enter Choice : ";
    std::cin >> temp;
    n = std::stoi(temp);
    if (n > 4)
      break;
    std::cout << "Enter Number 1 : ";
    std::cin >> temp;
    n1 = std::stoi(temp);
    std::cout << "Enter Number 2 : ";
    std::cin >> temp;
    n2 = std::stoi(temp);
    switch (n) {
    case 1: {
      std::cout << "Result is : " << n1 + n2 << "\n";
      break;
    }
    case 2: {
      std::cout << "Result is : " << n1 - n2 << "\n";
      break;
    }
    case 3: {
      std::cout << "Result is : " << n1 * n2 << "\n";
      break;
    }
    case 4: {
      std::cout << "Result is : " << n1 / n2 << "\n";
      break;
    }
    case 5: {
      state = 0;
      break;
    }
default:
      break;
    }
  }
  return 0;
}
