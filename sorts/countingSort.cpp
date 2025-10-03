#include "countingSort.h"
#include <vector>

void countingSort(int array[], int n) {
    if (n <= 0) return;

    int min = array[0];
    int max = array[0];

    // find min and max
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    int range = max - min + 1;
    std::vector<int> count(range, 0);
    std::vector<int> output(n);

    // store the counts
    for (int i = 0; i < n; i++) {
        count[array[i] - min]++;
    }

    // update count[i]
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // create output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[array[i] - min] - 1] = array[i];
        count[array[i] - min]--;
    }

    // copy output array to array[]
    for (int i = 0; i < n; i++) {
        array[i] = output[i];
    }
}