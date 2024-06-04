#include <iostream>
#include <string>

using namespace std;

int main() {
    string Y[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int Z = sizeof(Y) / sizeof(Y[0]);

    
    for (int i = 0; i < Z; ++i) {
        if (Y[i][0] == 'B') {
            cout << "Element starting with 'B': " << Y[i] <<endl;
        }
    }

    return 0;
}
