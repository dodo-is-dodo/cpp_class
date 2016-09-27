#include <iostream>
#include <math.h>

int main(int argc, char *argv[])
{
  std::string temp;
  int n = 3;
  int sum = 0;
  int lst[n];
  std::cout << "Put in a, b, c!\n";
  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    lst[i] = std::stoi(temp);
    // std::cout << num << "\n";
  }
  double a = lst[0];
  double b = lst[1];
  double c = lst[2];

  if (a == 0)
  {
    if (b == 0)
      std::cout << "no solutions\n";
    else
      std::cout << "one root : " << -c/b << "\n";
  }
  else if ((b*b - 4*a*c) < 0)
    std::cout << "no root!\n";
  else
  {
    std::cout << "first root is " << (-b + sqrt(b*b - 4*a*c))/(2*a) << "\n";
    std::cout << "second root is " << (-b - sqrt(b*b - 4*a*c))/(2*a) << "\n";
  }

  return 0;
}
