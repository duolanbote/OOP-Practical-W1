bool is_ascending(int array[], int n) {
    if (n < 1) {
        return false;
    }

    int i = 0;
    while (i < n - 1) {
        if (array[i] > array[i + 1]) {
            return false;
        }
        i = i + 1;
    }

    return true;
}
