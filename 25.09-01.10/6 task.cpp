#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Введіть число: ";
    cin >> value;

    bool answer = false; 

    // перевірка умов
    if (value >= 0 && value < 10) {
        answer = true;
    }
    else if (value * 2 < 20 && value - 2 > -2) { //якщо попереднє твердження неправильне
        answer = true;
    }
    else if (value - 1 > 1 && (value - 1) / 2 < 10) {
        answer = true;
    }
    else if (value == 111) {
        answer = true;
    }

    if (answer) {
        cout << "Умова виконується" << endl;
    }
    else {
        cout << "Умова не виконується" << endl;
    }

    return 0;
}
