#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Function to safely get a number from the user
double getNumber(const string& prompt) {
    double num;
    while (true) {
        cout << prompt;
        cin >> num;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return num;
        }
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "=== Simple Calculator ===\n";

    num1 = getNumber("Enter first number: ");

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    num2 = getNumber("Enter second number: ");

    double result;
    bool validOperation = true;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                validOperation = false;
            } else {
                result = num1 / num2;
            }
            break;

        default:
            cout << "Error: Invalid operator.\n";
            validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << result << "\n";
    }

    return 0;
}
