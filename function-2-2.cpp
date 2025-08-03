int max_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    int max = array[0];

    int i = 1;
    while (i < n) {
        if (array[i] > max) {
            max = array[i];
        }
        i = i + 1;
    }

    return max;
}

