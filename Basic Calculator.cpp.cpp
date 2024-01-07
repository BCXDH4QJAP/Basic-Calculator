#include <iostream>
using namespace std;

int add(double num1, double num2) {
    return num1 + num2;
}

int subtract(double num1, double num2) {
    return num1 - num2;
}


int multiply(double num1, double num2) {
    return num1 * num2;
}


int divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    int num1, num2;
    char operation;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Error: Invalid operation." << std::endl;
            break;
    }

    return 0;
}

