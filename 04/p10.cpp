#include <iostream>

int* prime_list(int* list, int end)
{
  list[0] = 2;
  list[1] = 3;
  list[2] = 5;
  int i = 3;
  int n = 7;
  bool state = true;
  while(n < end)
    {
      for (int j = 0; j < i; j++) {
        if (n % list[j] == 0)
          {
            state = false;
            break;
          }
      }
      if (state)
        list[i++] = n;
      state = true;
      n += 2;
    }
  return list;
}

int main(int argc, char *argv[])
{
  int p_list[10000] = {0};
  prime_list(p_list, 100000);
  int i = 0;
  while (p_list[i] > 0)
    std::cout << p_list[i++] << "  ";

  return 0;
}
