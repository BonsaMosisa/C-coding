#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;

    cout << "Input a number: ";
    cin >> num;

    // Extract each digit and add to the sum
    while (num > 0) {
        sum += num % 10;  // Get the last digit
        num /= 10;        // Remove the last digit
    }

    cout << "The sum of digits of " << num << " is: " << sum << endl;

    return 0;
}
