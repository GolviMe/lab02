#include <iostream>
#include <string>

int main() {
    std::string name; // Переменная для имени
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Вывод приветствия
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
