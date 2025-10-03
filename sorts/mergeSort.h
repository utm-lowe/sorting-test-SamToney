#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

void merge(std::vector<int>& array, int left, int mid, int right);
void mergeSort(std::vector<int>& array, int left, int right);

#endif // MERGE_SORT_H