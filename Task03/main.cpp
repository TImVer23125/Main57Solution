#include "logic.h"

int main() {
    int size, target;

    cout << "Enter size of sorted range(1-size): ";
    cin >> size;
    cout << "Enter target number to search: ";
    cin >> target;

    if (target < 0 || target >= size) {
        cout << "Target out of range." << endl;
        return 0;
    }

    cout << "Iterative: " << (binary_search_iterative(target, size) ? "Found" : "Not found") << endl;
    cout << "Recursive: " << (binary_search_recursive(target, 0, size - 1) ? "Found" : "Not found") << endl;

    return 0;
}