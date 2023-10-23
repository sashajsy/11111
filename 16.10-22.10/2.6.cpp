#include <iostream>

int main() {
    int c0, steps = 0;

    
    std::cout << "Введіть не відємне та ненульове число: ";
    std::cin >> c0;

    while (c0 != 1) { 
        if (c0 % 2 == 0) { 
            c0 = c0 / 2; // парне/непарне-остава
        } else { 
            c0 = 3 * c0 + 1; // якщо непарне 
        }
        steps++; 
        std::cout << c0 << " "; 
    }

    std::cout << "\nВсього кроків: " << steps << std::endl;

    return 0;
}
