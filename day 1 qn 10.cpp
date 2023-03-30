#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radius, length, width;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float circle_area = 3.14 * pow(radius, 2);

   cout << "The area of the circle is: " << circle_area << endl;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    float rect_area = length * width;

    cout << "The area of the rectangle is: " << rect_area << endl;

    return 0;
}
