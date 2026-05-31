#include "logic.h"

int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    cout << "Iterative: " << (is_power_of_four_iterative(n) ? "Yes" : "No") << endl;
    cout << "Recursive: " << (is_power_of_four_recursive(n) ? "Yes" : "No") << endl;

    return 0;
}