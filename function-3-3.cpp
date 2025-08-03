double weighted_mean(int marks[], int weights[], int n) {
    if (n < 1) return 0;

    int total_weight = 0;
    int weighted_sum = 0;

    for (int i = 0; i < n; i++) {
        weighted_sum += marks[i] * weights[i];
        total_weight += weights[i];
    }

    if (total_weight == 0) return 0;

    return (double)weighted_sum / total_weight;
}
