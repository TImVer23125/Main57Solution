#include "logic.h"

int main() {
    int length, width;

    cout << "Enter land length and width: ";
    cin >> length >> width;

    cout << "Iterative: Largest square size is " << largest_square_iterative(length, width) << endl;
    cout << "Recursive: Largest square size is " << largest_square_recursive(length, width) << endl;

    return 0;
}