#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class FunctionCalculator {
public:
    // Функція що рахує a[x, y, z, b]
    static double calculateA(double x, double y, double z, double b) {
        return (pow(1 + y, 2) * pow(fabs(x + y), 0.3)) / (pow(b, 2) + z / (1 + exp(-(x - z))) + pow(fabs(y), 0.43));
    }

    // Функція Функція що рахує b[x, y, z]
    static double calculateB(double x, double y, double z) {
        return x * (y + atan(fabs(x * x + z) / (2 * z + x + sin(y) * sin(y) + exp(-x + z) / (z + 1))));

    }
};

int main() {
    double x = 0.48 * 10;
    double y = 0.47 * 10;
    double z = -1.32 * 10;

    // Рахуємо b[x, y, z]
    double resultB = FunctionCalculator::calculateB(x, y, z);

    // Рахуємо значення a[x, y, z, b]
    double resultA = FunctionCalculator::calculateA(x, y, z, resultB);

    // Вивід результати
    std::cout << "znachennya b[x, y, z] = " << resultB << std::endl;
    std::cout << "znachennya a[x, y, z, b] = " << resultA << std::endl;

    return 0;
}
