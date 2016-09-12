#include <iostream>

int main(int argc, char *argv[])
{
    std::string s1, s2, s3;
    std::cout << "Please enter your 3 numbers : ";
    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;
    std::cout << "Your numbers forward :\n";
    std::cout << s1 << "\n";
    std::cout << s2 << "\n";
    std::cout << s3 << "\n";
    std::cout << "Your numbers backward :\n";
    std::cout << s3 << "\n";
    std::cout << s2 << "\n";
    std::cout << s1 << "\n";
    
    return 0;
}
