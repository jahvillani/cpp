#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Error: Maximum allowed rows is 3. Exiting program." << endl;
        cout << " Renter the value :" << endl;
        cin >> rows;
    } else {

    }
    

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Error: Maximum allowed columns is 3. Exiting program." << endl;
        cout << "Remter the value :" << endl;
        cin >> cols;
        
    }

    //Dynamically allocate a 2D array of doubles 
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    //Assign values to each element using nested loops
    double value = 1.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = value++;
        }
    }

    //Output the values of each element
    cout << "Array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    //deleting the memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
