#include <iostream>

//void hello() {
//    std::cout << "Hello world!\n";
//}

//void exchange() {
//    const double pi = 3.14;
//    double r = 10;
//    double c = 2 * pi * r;
//    std::cout << "pi = " << pi << "\n";
//    std::cout << "r = " << r << "\n";
//    std::cout << "c = 2*pi*r = " << c << "\n";
//}

//void namingConvention() {
//    int file_size;  // snake case
//    int FileSize;   // pascal case
//    int fileSize;   // camel case
//}

void mathematicalExpressions() {
    int x = 10;
    int y = 3;
    int z = x + y;
    std::cout << z << "\n";
    z = x - y;
    std::cout << z << "\n";
    z = x * y;
    std::cout << z << "\n";
    z = x / y;
    std::cout << z << "\n";
    z = x % y;
    std::cout << z << "\n";
    double c = (double)x / y;
    std::cout << c << "\n";
}

int main() {
//    hello();
//    exchange();
    mathematicalExpressions();
    return 0;
}
