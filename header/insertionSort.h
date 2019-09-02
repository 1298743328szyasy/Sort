//
// Created by songai on 2019/9/2.
//

#ifndef SORT_INSERTIONSORT_H
#define SORT_INSERTIONSORT_H
#include <iostream>
#include <algorithm>

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
#endif //SORT_INSERTIONSORT_H
