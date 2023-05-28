#include <iostream>

class DivideByZeroException {}; // Исключение деления на 0

double divideNumbers(double a, double b)
{
    if (b == 0)
        throw DivideByZeroException(); // Генерируем исключение деления на 0

    return a / b;
}

int main()
{
    try {
        double result1 = divideNumbers(10, 2);
        std::cout << "Result 1: " << result1 << std::endl;

        double result2 = divideNumbers(5, 0); // Деление на 0
        std::cout << "Result 2: " << result2 << std::endl;
    }
    catch (const DivideByZeroException&) {
        std::cout << "Caught DivideByZeroException: Division by zero occurred." << std::endl;
    }
    catch (...) {
        std::cout << "Caught an exception." << std::endl;
    }

    return 0;
}