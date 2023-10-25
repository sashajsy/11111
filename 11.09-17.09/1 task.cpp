#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double z;
    double c;
    double x;
    double Y;

    cout << "Enter z value: ";
    cin >> z;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter c value: ";
    cin >> c;

    if (x <= 1) {
        Y = (6 * z * z - 5) / 3;
    } else {
        Y = (5 * z * z - 4) / 12;
    }

    cout << "Result: Y = " << Y << endl;

    return 0;
}
