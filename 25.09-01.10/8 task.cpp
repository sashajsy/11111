#include <iostream>
#include <cmath>

int main() {
    int num1, num2;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    float result1 = 1.0 / num1;
    float result2 = 1.0 / num2;

    float epsilon = 0.000001; // значення epsilon для порівняння

    if (std::abs(result1 - result2) < epsilon) {
        std::cout << "Результати рівні" << std::endl;
    } else {
        std::cout << "Результати не рівні" << std::endl;
    }

    return 0;
}
