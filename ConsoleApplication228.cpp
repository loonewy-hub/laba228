#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;

    // Задание 1
    double x;
    cout << "Введите радиус круга (x): ";
    cin >> x;
    double circle = PI * x * x;
    double triangle = x * x;
    cout << "Площадь фигуры: " << circle - triangle << endl;

    // Задание 2
    double a, b, c, d;
    cout << "Введите 4 числа через пробел: ";
    cin >> a >> b >> c >> d;

    double minVal = a;
    int minIndex = 1;

    if (b < minVal) { minVal = b; minIndex = 2; }
    if (c < minVal) { minVal = c; minIndex = 3; }
    if (d < minVal) { minIndex = 4; }

    cout << "Номер наименьшего: " << minIndex << endl;

    return 0;
}