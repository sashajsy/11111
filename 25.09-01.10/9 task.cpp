#include <iostream>

int main() {
    int num1, num2, num3, num4;

    std::cout << "Введіть перше число (1-255): ";
    std::cin >> num1;

    std::cout << "Введіть друге число (1-255): ";
    std::cin >> num2;

    std::cout << "Введіть третє число (1-255): ";
    std::cin >> num3;

    std::cout << "Введіть четверте число (1-255): ";
    std::cin >> num4;

    if (num1 >= 1 && num1 <= 255 && num2 >= 1 && num2 <= 255 && num3 >= 1 && num3 <= 255 && num4 >= 1 && num4 <= 255) {
        std::cout << num1 << "." << num2 << "." << num3 << "." << num4 << std::endl; //вивід чисел через крапку, як айпі
    } else {
        std::cout << "НЕВІРНО! Всі 4 числа повинні бути в діапазоні (1-255)." << std::endl;
    }

    return 0;
}
