#include <iostream>

using namespace std;

int main() {
    // Use double to allow decimal values for precision
    double length, width, area, perimeter;

    // Get dimensions from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Perform geometric calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
