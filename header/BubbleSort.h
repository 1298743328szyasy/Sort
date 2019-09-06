//
// Created by songai on 2019/9/5.
//

#ifndef SORT_BUBBLESORT_H
#define SORT_BUBBLESORT_H
#include <iostream>
#include <algorithm>

using namespace std;
template<typename T>
//类似选择排序
//冒泡排序利用循环比较先将大数放大后面每一轮放一个数
//每轮将n减小1不再与后面的数比较
void bubbleSort(T arr[],int n){
    bool swapped;
    do{
        swapped = false;
        for(int i=1;i<n;i++)
            if(arr[i-1]>arr[i]){
                swap(arr[i-1],arr[i]);
                swapped=true;
            }
        n--;
    }while(swapped);
}
template<typename T>
void bubbleSort2(T arr[],int n){
    int newn;
    do{
        newn=0;
        for(int i=1;i<n;i++)
            if(arr[i-1]>arr[i]) {
                swap(arr[i - 1], arr[i]);
                newn=i;
            }
        n=newn;
    }while(newn>0);
}
#endif //SORT_BUBBLESORT_H
