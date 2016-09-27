#include <iostream>

bool chk_palindrome(int n)
{
  std::string s = std::to_string(n);
  for (unsigned long i = 0; i < s.length()/2; i++)
    {
      if (s[i] != s[s.length()-i-1])
        return false;
    }
  return true;
}

int main(int argc, char *argv[])
{
  int n = 1031;
  std::cout << chk_palindrome(n) << "\n";
  
  return 0;
}
