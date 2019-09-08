//
// Created by songai on 2019/9/7.
//

#ifndef SORT_MERGESORT_H
#define SORT_MERGESORT_H
#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void __merge(T arr[],int l,int mid,int r){
    T aux[r-l+1];
    //从零开始一一复制数组arr的值
    for(int i=l;i<=r;i++)
        aux[i-l]=arr[i];
    int i=l,j=mid+1;
    for(int k=l;k<=r;k++){
        //左侧排序完成，直接考虑右侧
        if(i>mid) {
            arr[k]=aux[j-l];
            j++;
        }else if(j>r){
            arr[k]=aux[i-l];
            i++;
        }else if(aux[i-l]<aux[j-l]){
            arr[k]=aux[i-l];
            i++;
        }else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}
template <typename T>
void __mergeSort(T arr[],int l,int r){
    //左右两端缩小到合适的距离时，插入排序较归并排序更优
    if(r-l<=18) {
        insertionSort(arr,l,r);
        return;
    }
    int mid=(l+r)/2;
    __mergeSort(arr,l,mid);
    __mergeSort(arr,mid+1,r);
    //判断如果已经有序不用接着进行
    if(arr[mid]>arr[mid+1]) {
        __merge(arr, l, mid, r);
    }
}
template <typename T>
void mergeSort(T arr[],int n){
    __mergeSort(arr,0,n-1);
}
#endif //SORT_MERGESORT_H
