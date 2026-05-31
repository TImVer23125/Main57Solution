#include "logic.h"

int main() {
    int n;
    cout << "Enter index of tribonacci number: ";
    cin >> n;

    cout << "Result for iterative: " << tribonacci_iterative(n) << endl;
    cout << "Result for recursive: " << tribonacci_recursive(n) << endl;

    return 0;
}