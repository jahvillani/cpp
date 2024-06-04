#include <iostream>
using namespace std;

int main() {
    int userNumber;

    
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userNumber;
        while (userNumber > 5 && userNumber < 10) {
            cout<<"You enter valid number";
        }
        cout<<"You entered invalid number. Please renter : " << userNumber <<endl;
        return 0;
    }
    

    

