#include <iostream>
using namespace std;

int main(void) {
    double pi4 = 0.0;
    long n;

    cout << "Number of iterations? ";
    cin >> n;

    for (long i = 0; i < n; i++) {
        double term = 1.0 / (2 * i + 1);

        
        if (i % 2 == 0) {
            pi4 += term;
        } else {
            pi4 -= term;
        }
    }

    pi4 *= 4.0; 

    cout.precision(20);
    cout << "Pi = " << pi4 << endl;

    return 0;
}
