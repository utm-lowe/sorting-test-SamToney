#include "selectionSortB.h"
    
// SelectionSortB: swap at the end
void selectionSortB(std::vector<int>& array) {
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(array[i], array[minIndex]);
        }
    }
}
