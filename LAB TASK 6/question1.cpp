#include<iostream>

using namespace std;

int main(){
    int* dynamicMemory1 = new int;
    string* dynamicaMemory2 = new string;

    //user input1 for integer value
    cout << "Enter Input1 : " <<endl;
    int input1;
    cin >> input1;

     *dynamicMemory1 = input1;

    //user input2 for string value
    cout<< "Enter Input2 : " <<endl;
    string input2;
    cin >> input2;

     *dynamicaMemory2 = input2;

    //oupting to console the values
    cout << "Assign value to dynamicMemory1 is : " << *dynamicMemory1 <<endl;
    cout << "Assign value to dynamicMemory2 is : " << *dynamicaMemory2 <<endl;

    //deleting the dynamic allocated memory
    delete dynamicaMemory2;
    delete dynamicMemory1;
    return 0;


}