#include <iostream>

int main() {
    int x = 17;
    int y = 23;
    std::cout << "before:\n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    int temp = x;
    x = y;
    y = temp;
    std::cout << "after:\n";
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    return 0;
}