#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char cityLetter;

    cout << "Введите первую букву города (M, L, N, O, P, R, G): ";
    cin >> cityLetter;

    
    cityLetter = tolower(cityLetter); // маленькі, великі букви

    int population = 0;
    double area = 0.0;
    string cityName; 

    switch (cityLetter) {
        case 'm':
            population = 1000000;
            area = 500.5;
            cityName = "Madrid (Spain)";
            break;
        case 'l':
            population = 750000;
            area = 400.2;
            cityName = "London (England)";
            break;
        case 'n':
            population = 600000;
            area = 350.7;
            cityName = "New-York (USA)";
            break;
        case 'o':
            population = 450000;
            area = 275.8;
            cityName = "Odessa (Ukraine)";
            break;
        case 'p':
            population = 300000;
            area = 200.4;
            cityName = "Paris (France)";
            break;
        case 'r':
            population = 200000;
            area = 125.2;
            cityName = "Rome (Italy)";
            break;
        case 'g':
            population = 100000;
            area = 75.3;
            cityName = "Gamburg(Germany) ";
            break;
        default:
            cout << "Відсутнє місто на цю букву." << endl;
            return 1;
    }

    cout << "Місто: " << cityName << endl;
    cout << "Населення: " << population << " людей" << endl;
    cout << "Площа: " << area << " кв. км" << endl;

    return 0;
}
