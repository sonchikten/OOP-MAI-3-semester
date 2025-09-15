#include <iostream>
#include "lab1.h"

int main() {
    std::cout << "Enter a number: " << std::endl;  //выставляет символ новой строк \n
    int number;
    
    // Ввод числа
    std::cin >> number;
    
    // Вычисление и вывод результата
    if (IsNonDecreasing(number)) {
        std::cout << "This number is a non-decreasing number!" << std::endl;
        return 0;
    }
    std::cout << "This number is not a non-decreasing number!" << std::endl;
    return 0;
};