#include <iostream>
#include <utility>

int main() {
    int a = 5;
    int b = 10;

    std::swap(a, b);

    std::cout << "a: " << a << ", b: " << b << std::endl;
    return 0;
}
