int sum_two_arrays(int array1[], int secondaryarray[], int n) {
    if (n < 1) return 0;

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += array1[i] + secondaryarray[i];
    }
    return total;
}
