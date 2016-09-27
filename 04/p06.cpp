#include <iostream>

int main(int argc, char *argv[])
{
  std::string temp;
  double sum = 0;
  int n = 3;
  int lst[n];
  std::cout << "Put in 3 exam scores!\n";
  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    lst[i] = std::stoi(temp);
    if (lst[i] > 100)
    {
      std::cout << "score must be lower than 100\n";
      return 0;
    }
    sum += lst[i];
  }
  sum = sum / n;

  if (sum >= 90)
    std::cout << "Your grade is A!\n";
  else if (sum >= 70)
    std::cout << "Your grade is B!\n";
  else if (sum >= 50)
    std::cout << "Your grade is C!\n";
  else
    std::cout << "Your grade is F!\n";

  return 0;
}
