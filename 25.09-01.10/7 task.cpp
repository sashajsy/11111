#include <iostream> 
#include <iomanip>  // формат виводу
using namespace std;

int main() {
    double num1, num2, num3, num4, num5; 

    
    cout << "Введіть п'ять чисел: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << fixed; // фіксоване кол-во десят.знаків після коми 

    
    cout << setprecision(1) << num1 << endl; // 1 знак після коми
    cout << setprecision(2) << num2 << endl; // 2 знаки після коми
    cout << setprecision(6) << num3 << endl; // 6 знаки після коми
    cout << setprecision(2) << num4 << endl; // 2 знаки після коми
    cout << setprecision(0) << num5 << endl; // округлення до цілої

    return 0; 
}
