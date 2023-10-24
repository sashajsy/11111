#include <iostream>
#include <cmath>

int main() {
    double sum_of_roots = 0.0;

    for (int i = 1; i <= 20; i++) {
        double root = sqrt(i); // обчислюємо кореня кожного число
        sum_of_roots += root;  // додавання корення до суми
    }

    double average = sum_of_roots / 20.0; // середнє арифмтичне
    std::cout << "Середнє арифметичне коренів чисел від 1 до 20: " << average << std::endl;

    return 0;
}
