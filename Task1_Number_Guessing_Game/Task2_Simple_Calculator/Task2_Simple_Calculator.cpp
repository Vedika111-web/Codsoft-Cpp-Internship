#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "        SIMPLE CALCULATOR" << endl;
    cout << "---------------------------------" << endl;

    //  input numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Choose operation
    cout << "\nChoose an operation (+, -, *, /): ";
    cin >> operation;

    cout << "\nResult: ";

    switch(operation) {
        case '+':
            cout << num1 + num2 << endl;
            break;
      
         case '-':
            cout << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 * num2 << endl;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Invalid operation selected." << endl;
    }

    cout << "\nThanks for using the Simple Calculator!" << endl;

    return 0;
