#include <iostream>

double area(double r) {
    return 3.14159 * r * r;
}

int main() {
    std::cout << area(2.0) << std::endl;
    return 0;
}
