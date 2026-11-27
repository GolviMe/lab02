#include <iostream>
#include <string>

int main() {
    std::string name; // User name
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Output greeting
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
