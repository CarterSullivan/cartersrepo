#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    std::cout << "Number a: ";
    std::cin >> a;
    std::cout << "\nNumber b: ";
    std::cin >> b;
    std::cout << "\nNumber c: ";
    std::cin >> c;
    
    double result_1 = ((0 - b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    double result_2 = ((0 - b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
    std::cout << "\n\nResults: \nx1= " << result_1 << "\nx2= " << result_2;
    return 0;
}
