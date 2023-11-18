#include <iostream>
#include <cmath>

using namespace std;
// Функция для приписывания С к числу x
int f(int x, int c) {
    int y = x;
    int b = c;
    int digit = 0;

    while (b) {
        b = b / 10;
        digit++;
    }
    return x * pow(10, digit) + c;
}

int main() {
    setlocale(LC_ALL, "RU");
    int x, c;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите С: ";
    cin >> c;
    int Y = f(x, c);
    cout << "Y = " << Y << endl;

    return 0;
}