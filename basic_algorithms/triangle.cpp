#include <iostream>

using namespace std;

void printEquilateralTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            cout << " "; // Print spaces before each row

        for (int k = 1; k <= 2 * i ; k++)
            cout << "*"; // Print asterisks for each row

        cout << endl; // Move to the next line after each row is printed
    }
}

void printRightAngledTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*"; // Print asterisks for each row up to 'i'

        cout << endl; // Move to the next line after each row is printed
    }
}

void printIsoscelesTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            cout << " "; // Print spaces before each row

        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*"; // Print asterisks for each row

        cout << endl; // Move to the next line after each row is printed
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Equilateral Triangle:" << endl;
    printEquilateralTriangle(rows);

    cout << endl << "Right-Angled Triangle:" << endl;
    printRightAngledTriangle(rows);

    cout << endl << "Isosceles Triangle:" << endl;
    printIsoscelesTriangle(rows);

    return 0;
}
