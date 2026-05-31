#include "logic.h"

int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;

    cout << "Is it number is power of four?\n" << (is_power_of_four(n) ? "Yes." : "No.") << endl;

    return 0;
}