#include "lab1.h"

// Реализация функций
int modulo_operation(int a, int b) {
    return a % b;
}

int division(int a, int b) {
    return a / b;
}

bool compare(int a, int b) {
   if(a >= b) {
    return true;
   } else {
    return false;
   }
}

bool IsNonDecreasing(int number) {
    int first_digit = modulo_operation(number, 10);
    number = division(number, 10);
    while(number){
        int second_digit = modulo_operation(number, 10);
        number = division(number, 10);
        if(!(compare(first_digit, second_digit))){
            return false;
        } 
        first_digit = second_digit;
    }
    return true;
}