//
// Created by songai on 2019/9/2.
//

#ifndef SORT_SELECTIONSORT_H
#define SORT_SELECTIONSORT_H
#include <iostream>
#include <algorithm>

using namespace std;
template<typename T>
void selectionSort(T arr[],int n){
    //每一轮:从第一个开始一直比到最后一个得出此轮的最小数与最前面的数交换
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[minIndex]>arr[j])
                minIndex=j;
        swap(arr[i],arr[minIndex]);
    }
}
#endif //SORT_SELECTIONSORT_H
