void two_five_nine(int array[], int n) {
    int count2 = 0;
    int count5 = 0;
    int count9 = 0;

    int i = 0;
    while (i < n) {
        switch (array[i]) {
            case 2:
                count2 = count2 + 1;
                break;
            case 5:
                count5 = count5 + 1;
                break;
            case 9:
                count9 = count9 + 1;
                break;
            default:
                break;
        }
        i = i + 1;
    }

}
