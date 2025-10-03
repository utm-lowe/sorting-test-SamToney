#include "radixSort.h"
#include <vector>

void radixSort(int array[], int n) {
    const int BITS = 32;
    std::vector<int> output(n);

    for (int bit = 0; bit < BITS; bit++) {
        int count[2] = {0};

        // count occurrences
        for (int i = 0; i < n; i++) {
            int bitValue = (array[i] >> bit) & 1;
            count[bitValue]++;
        }

        // update count[i]
        count[1] += count[0];

        // build output
        for (int i = n - 1; i >= 0; i--) {
            int bitValue = (array[i] >> bit) & 1;
            output[count[bitValue] - 1] = array[i];
            count[bitValue]--;
        }

        // copy output to array
        for (int i = 0; i < n; i++) {
            array[i] = output[i];
        }
    }
}