#include <iostream>
#include <cmath>

int main() {
    
    double x, y;

    
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Введіть значення x " << i << ": ";
        std::cin >> x;

        //Обчислення
        y = pow(sin(x), 5) * fabs(5 * x + 1.5);
        std::cout << "Для x = " << x << ", y = " << y << std::endl;
    }

    return 0;
}
