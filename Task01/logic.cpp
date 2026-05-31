#include "logic.h"

// O(log n)
bool is_power_of_four_iterative(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

// O(log n)
bool is_power_of_four_recursive(int n) {
    if (n <= 0) {
        return false;
    }

    if (n == 1) {
        return true;
    }

    if (n % 4 == 0) {
        return is_power_of_four_recursive(n / 4);
    }
    else {
        return false;
    }
}