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
    //插入排序相对智能，在循环的时候先判断，如果有序直接进行下一次
    //这就决定了如果该随机数序列是一个近乎有序的序列，插入排序的效率会大大提高。
    for (int i = 1; i < n; i++) {
        T e = arr[i];
        int j;
        for (j = i; j > 0 && e < arr[j - 1]; j--)
            arr[j] = arr[j - 1];
        arr[j] = e;
    }
}
template<typename T>
void insertionSort(T arr[],int l,int r){
    for(int i=l+1;i<=r;i++){
        T e=arr[i];
        int j;
        for(j=i;j>l&&e<arr[j-1];j--)
            arr[j]=arr[j-1];
        arr[j]=e;
    }
}
#endif //SORT_INSERTIONSORT_H
