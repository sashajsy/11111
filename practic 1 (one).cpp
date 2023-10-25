#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 3;
    double b = 0.151;
    double result = 0;

    result = (1 - pow(cos(b/a * M_PI), 2)) / (0.58 * exp(b) + 0.312 * exp(a));

    cout << "Result: " << result << endl;
    return 0;
}
