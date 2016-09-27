#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
  
  // std::string temp;
  int n = 3;
  // int num;
  int lst[n];
  std::cout << "Put in 3 numbers!\n";
  // for (int i = 0; i < n; i++) {
  //   std::cin >> num;
  //   std::cin >> temp;
  //   lst[i] = std::stoi(temp);
  //   std::cout << num << "\n";
  // }
  std::string input;
  std::vector<std::string> numbers;
  for(int i = 0; i < n; i++)
  {
    if (i < 2)
      getline( std::cin, input, ' ' );
    else
      getline( std::cin, input, '\n');
    lst[i] = std::stoi(input);
    std::cout << lst[i] << "\n";
    
  }
  int max = lst[0];
  for (int i = 0; i < n; i++) {
    if (lst[i] > max)
      max = lst[i];
  }
  std::cout << "Max is "<< max << "\n";
  return 0;
}
