//
// Created by songai on 2019/9/2.
//
#include <iostream>
#include <cstring>
#include "../header/SortTestHelper.h"
#include "../header/insertionSort.h"
#include "../header/mergeSort.h"
using namespace std;
template<typename T>
int __partion(T arr[],int l,int r){
    T v = arr[l];
    //[l+1...j]  [j+1...i]
    int j = l;
    for(int i=l+1;i<=r;i++){
        if(arr[i]<v)
            swap(arr[i],arr[++j]);
    }
    swap(arr[l],arr[j]);
    return j;
}
template<typename T>
void __quickSort(T arr[],int l,int r){
    if(l>=r)
        return;
    int p = __partion(arr,l,r);
    __quickSort(arr,l,p-1);
    __quickSort(arr,p+1,r);
}
template<typename T>
void quickSort(T arr[],int n){
    __quickSort(arr,0,n-1);
}
int main(){
    int n=50000;
    int *arr1=SortTestHelper::generateRandomArray(n,0,n);
    int *arr2=SortTestHelper::copyIntArray(arr1,n);
    SortTestHelper::testSort("InsertionSort",insertionSort,arr1,n);
    SortTestHelper::testSort("merge Sort",mergeSort,arr2,n);
    delete[] arr1;
    delete[] arr2;
}