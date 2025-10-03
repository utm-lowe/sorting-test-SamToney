#include "selectionSortA.h"

// SelectionSortA: swap each time
void selectionSortA(std::vector<int>& array) {
    int n = array.size();
    for (int i=0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[i]) {
                std::swap(array[i], array[j]);
            }
        }
    }
}