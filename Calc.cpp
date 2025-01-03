#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) { return a + b; }
    float subtract(float a, float b) { return a - b; }
    float multiply(float a, float b) { return a * b; }
    float divide(float a, float b) { 
        if (b == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0; 
        }
        return a / b; 
    }
};

int main() {
    Calculator calc;
    char choice;
    do {
        float num1, num2, result;
        char op;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        if (op == '/' && num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            continue;
        }

        switch (op) {
            case '+': result = calc.add(num1, num2); break;
            case '-': result = calc.subtract(num1, num2); break;
            case '*': result = calc.multiply(num1, num2); break;
            case '/': result = calc.divide(num1, num2); break;
            default: 
                cout << "Invalid operator." << endl; 
                continue;
        }

        cout << "Result: " << result << endl;
        cout << "Another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

