int min_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    int min = array[0];

    int i = 1;
    while (i < n) {
        if (array[i] < min) {
            min = array[i];  
        }
        i = i + 1;  


    return min;
}
