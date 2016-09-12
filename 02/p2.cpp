#include <iostream>
#include <math.h>

int main(int argc, char *argv[])
{
    std::cout << "##########\n";
    std::cout << "########\n";
    std::cout << "######\n";
    std::cout << "####\n";
    std::cout << "##\n";
    std::cout << "####\n";
    std::cout << "######\n";
    std::cout << "########\n";
    std::cout << "##########\n";

    std::cout << "\n";

    int temp = -4;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < abs(temp) + 1; j++)
        {
            std::cout << "##";
            
        }
        std::cout << "\n";
        temp++;
    }
    
    return 0;
}
