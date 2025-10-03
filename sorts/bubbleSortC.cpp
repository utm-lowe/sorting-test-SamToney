#include "bubbleSortC.h"

void bubbleSortC(int array[], int n) {

    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = n-1; j > i; j--) {
            if (array[j] < array[j - 1]) {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}