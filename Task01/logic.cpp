#include "logic.h"

bool is_power_of_four(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 4 == 0) {
        n /= 4;
    }
    return recursive(n);
}

bool recursive(int n) {
    if (n <= 0) {
        return false;
    }

    if (n == 1) {
        return true;
    }

    if (n % 4 == 0) {
        return recursive(n / 4);
    }
    else {
        return false;
    }
}