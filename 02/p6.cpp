#include <iostream>

int main(int argc, char *argv[])
{
    std::string c1, c2, c3;
    std::cout << "Please enter score of C1 : ";
    std::cin >> c1;
    std::cout << "Please enter score of C2 : ";
    std::cin >> c2;
    std::cout << "Please enter score of C3 : ";
    std::cin >> c3;
    std::cout << "Your course wise score is:\n";
    std::cout << "C1:" << c1 << "\n";
    std::cout << "C2:" << c2 << "\n";
    std::cout << "C3:" << c3 << "\n";
    double total = std::stoi(c1) + std::stoi(c2) + std::stoi(c3);
    double avg = total / 3;
    std::cout << "Total Score : " << total << "\n";
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Average Score : " << avg << "\n";

    
    return 0;
}
