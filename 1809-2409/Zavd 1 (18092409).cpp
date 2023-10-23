#include <iostream>

int main() {
    int x;
    std::cout << "Введіть трьохзначне додатнє число: ";
    std::cin >> x;

    if (x >= 100 && x <= 999) {
        int number1 = x % 10; // одиниці
        int number2 = (x / 10) % 10; //десятки
        int number3 = x / 100; //сотні

        int count = 0;

        if (number1 < 7) {
            count++;
        }
        if (number2 < 7) {
            count++;
        }
        if (number3 < 7) {
            count++;
        }

        std::cout << "Розклад числа: " << number3 << " " << number2 << " " << number1 << std::endl;
        std::cout << "Кількість цифр, які менше за 7: " << count << std::endl;
    } 

    return 0;
}
