#include <iostream>
using namespace std;


float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

float areaOfRectangle(float length, float width) {
    return length * width;
}

float areaOfSquare(float side) {
    return side * side;
}

int main() {
    int choice;
    char rep;

    do {
        cout << "Select a shape to calculate the area:"<<endl;
        cout << "1. Triangle"<< endl;
        cout << "2. Rectangle"<< endl;
        cout << "3. Square" <<endl;
        cout << "Enter your choice: " <<endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                float base, height;
                cout << "Enter base length: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area of triangle: " << areaOfTriangle(base, height) << endl;
                break;
            }
            case 2: {
                float length, width;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area of rectangle: " << areaOfRectangle(length, width) << endl;
                break;
            }
            case 3: {
                float side;
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of square: " << areaOfSquare(side) << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3."<<endl;
        }

        cout << "Do you want to calculate another area? (y/n): ";
        cin >> rep;
    } while (rep == 'y' || rep == 'Y');

    cout << "Thank you!"<<endl;
    return 0;
}
