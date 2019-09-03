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
    //从第一个数开始与后面的数比较,如果是前面的数小继续向下一个数进行,反之大的数向后一位,小的数如果小于前一位接着与前面的数比较,之后同理.
    for (int i = 1; i < n; i++) {
        T e = arr[i];
        int j;
        for (j = i; j > 0 && e < arr[j - 1]; j--)
            arr[j]=arr[j-1];
        arr[j]=e;
    }
}
#endif //SORT_INSERTIONSORT_H
