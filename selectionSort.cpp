#include <iostream>
#include <algorithm>
#include <string>
#include "header/SortTestHelper.h"
#include "header/selectionSort.h"
using namespace std;
template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        T e = arr[i];
        int j;
        for (j = i; j > 0 && e < arr[j - 1]; j--)
            arr[j]=arr[j-1];
        arr[j]=e;
    }
}

int main() {
    int n = 10000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr2 = SortTestHelper::copyIntArray(arr, n);
    SortTestHelper::testSort("Insertion Sort", insertionSort, arr, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
    delete[] arr;
}