#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

// =========================
// Utility function for safe number input
// =========================
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

// =========================
// Class: Calculator
// =========================
class Calculator {
public:
    // Stores history of results (STL vector requirement)
    vector<double> history;

    double add(double a, double b) {
        double r = a + b;
        history.push_back(r);
        return r;
    }

    double subtract(double a, double b) {
        double r = a - b;
        history.push_back(r);
        return r;
    }

    double multiply(double a, double b) {
        double r = a * b;
        history.push_back(r);
        return r;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        double r = a / b;
        history.push_back(r);
        return r;
    }

    // Display stored results
    void showHistory() {
        if (history.empty()) {
            cout << "No calculations performed yet.\n";
            return;
        }

        cout << "\n=== Calculation History ===\n";
        for (size_t i = 0; i < history.size(); i++) {
            cout << i + 1 << ". " << history[i] << "\n";
        }
        cout << "===========================\n\n";
    }
};

// =========================
// Main Program
// =========================
int main() {
    Calculator calc;
    char choice;

    cout << "=== Simple C++ Calculator ===\n";

    // LOOP requirement
    do {
        double num1 = getNumber("Enter first number: ");

        cout << "Enter operator (+, -, *, /): ";
        char op;
        cin >> op;

        double num2 = getNumber("Enter second number: ");

        double result;
        bool valid = true;

        // CONDITIONALS + SWITCH
        switch (op) {
            case '+': result = calc.add(num1, num2); break;
            case '-': result = calc.subtract(num1, num2); break;
            case '*': result = calc.multiply(num1, num2); break;
            case '/': result = calc.divide(num1, num2); break;
            default:
                cout << "Invalid operator.\n";
                valid = false;
        }

        if (valid) {
            cout << "Result: " << result << "\n";
        }

        cout << "\nWould you like to see your calculation history? (y/n): ";
        char show;
        cin >> show;
        if (show == 'y' || show == 'Y') {
            calc.showHistory();
        }

        cout << "Perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!\n";
    return 0;
}
