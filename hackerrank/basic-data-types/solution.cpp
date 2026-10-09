#include <iomanip>
#include <iostream>

int main() {
    int a;
    long l;
    char ch;
    float c;
    double b;

    std::cin >> a >> l >> ch >> c >> b;
    std::cout << a << '\n';
    std::cout << l << '\n';
    std::cout << ch << '\n';
    std::cout << std::fixed << std::setprecision(3) << c << '\n';
    std::cout << std::fixed << std::setprecision(9) << b << '\n';

    return 0;
}
