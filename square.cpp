#include <iostream>
using namespace std;
int main() {
    double side, area, perimeter;
    cout << "Enter the side length of the square: ";
    cin >> side;
    area = side * side;
    perimeter = 4 * side;
    cout << "Area of the square: " << area << endl;
    cout << "Perimeter of the square: " << perimeter << endl;
    return 0;
}
