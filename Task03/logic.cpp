//O(log n)
bool binary_search_iterative(int target, int size) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid == target)
            return true;
        else if (mid < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

//O(log n)
bool binary_search_recursive(int target, int left, int right) {
    if (left > right) {
        return false;
    }

    int mid = left + (right - left) / 2;

    if (mid == target) {
        return true;
    }
    else if (mid < target) {
        return binary_search_recursive(target, mid + 1, right);
    }
    else {
        return binary_search_recursive(target, left, mid - 1);
    }
}