void sortAscending(float array[], int size) {
    float tmp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
}
void reverseArray(float array[], int size) {
    float tmp;
    for (int i = 0; i <= (size - 1) / 2; i++) {
        tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}
void sort(float array[], int size, bool isAscending) {
    sortAscending(array, size);
    if (isAscending == false) {
        reverseArray(array, size);
    }
}