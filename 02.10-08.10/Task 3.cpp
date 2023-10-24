#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;
    cout << "Введіть значення a, b, і step h: ";
    cin >> a >> b >> h;

    cout << "-------------------" << endl;
    cout << ":  X  :  Y  :" << endl;
    cout << "-------------------" << endl;

    for (double x = a; x <= b; x += h) {
        if (x * x <= 9) {
            double y = pow(x, 5) - sqrt(9 - x * x);
            cout << ": " << x << " : " << y << " :" << endl;
        } else {
            cout << "Не входить в діапазон." << endl;
            break;
        }
    }

    cout << "-------------------" << endl;

    return 0;
}
