//
// Created by songai on 2019/9/2.
//

#ifndef SORT_INSERTIONSORT_H
#define SORT_INSERTIONSORT_H
#include <iostream>
#include <algorithm>

using namespace std;
template<typename T>
void selectionSort(T arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[minIndex]>arr[j])
                minIndex=j;
        swap(arr[i],arr[minIndex]);
    }
}
#endif //SORT_INSERTIONSORT_H
