#include <iostream>

using namespace std;

int main() {
    int rows, number = 1;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces before the numbers
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }

        // Inner loop for printing the numbers
        for (int k = 1; k <= i; ++k) {
            cout << number++ << "  ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
