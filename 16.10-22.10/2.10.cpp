#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter a positive integer (greater than 1): ";
    cin >> n;

    
    if (n <= 1) {
        cout << "Size Small." << endl;
    }
    else if (n > 40) {
        cout << "Size big, you should enter less than 40" << endl;
    }
    else {
        int i = 0;
        while (i < n) {
            int j = 0;
            while (j < n) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << '+';
                } else {
                    cout << ' ';
                }
                j++;
            }
            cout << endl;
            i++;
        }
    }

    return 0;
}
