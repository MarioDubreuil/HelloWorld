#include <iostream>

using namespace std;

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

//void mathematicalExpressions() {
//    int x = 10;
//    int y = 3;
//    int z = x + y;
//    std::cout << z << "\n";
//    z = x - y;
//    std::cout << z << "\n";
//    z = x * y;
//    std::cout << z << "\n";
//    z = x / y;
//    std::cout << z << "\n";
//    z = x % y;
//    std::cout << z << "\n";
//    double c = (double)x / y;
//    std::cout << c << "\n";
//}

//void orderOfOperators() {
//    double x = 10;
//    double y = 5;
//    double z = (x + 10) / (3 * y);
//    std::cout << z;
//}

//void writeToConsole() {
//    double salesAmount = 95000;
//    cout << "Sales = " << salesAmount << endl;
//
//    const double stateTaxRate = 0.04;
//    double stateTaxAmount = stateTaxRate * salesAmount;
//    cout << "State Tax = " << stateTaxAmount << endl;
//
//    const double countyTaxRate = 0.02;
//    double countyTaxAmount = countyTaxRate * salesAmount;
//    cout << "County tax = " << countyTaxAmount << endl;
//
//    double totalTaxAmount = stateTaxAmount + countyTaxAmount;
//    cout << "Total Tax = " << totalTaxAmount;
//}

void readFromConsole() {
    cout << "Enter temperature in Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5 / 9.0;
    cout << "temperature in Celsius: " << celsius;
}

int main() {
//    hello();
//    exchange();
//    mathematicalExpressions();
//    orderOfOperators();
//    writeToConsole();
    readFromConsole();
    return 0;
}
