void selection_sort(float * v, int n) {
    int i, j, min, aux;

    for (i = 0; i < (n - 1); i++) {
        min = i;

        for (j = (i + 1); j < n; j++) {

            if (v[j] < v[min])
                min = j;
        }
        if (v[i] != v[min]) {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%.0f ", v[i]);
    }
    printf("\n");
}
