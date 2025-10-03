#include "quickSort.h"

void quickSort(std::vector<int>& A, int p, int r) {
    if (p < r) {
        int pivot = A[r];
        int i = p - 1;

        for (int j = p; j < r; j++) {
            if (A[j] < pivot) {
                i++;
                std::swap(A[i], A[j]);
            }
        }
        std::swap(A[i + 1], A[r]);
        int pi = i + 1;

        quickSort(A, p, pi - 1);
        quickSort(A, pi + 1, r);
    }
}