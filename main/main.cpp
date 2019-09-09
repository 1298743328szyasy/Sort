//
// Created by songai on 2019/9/2.
//
#include <iostream>
#include <cstring>
#include "../header/SortTestHelper.h"
#include "../header/insertionSort.h"
#include "../header/mergeSort.h"
#include <ctime>
using namespace std;
template<typename T>
int __partion(T arr[],int l,int r){
    swap(arr[l],arr[rand()%(r-l+1)+l]);
    T v = arr[l];
    int i=l+1,j=r;
    while(true){
        while(i<=r&&arr[i]<v)i++;
        while(j>=l+1&&arr[j]>v)j--;
        if(i>j)break;
        swap(arr[i],arr[j]);
        i++;
        j--;
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
    srand(time(NULL));
    __quickSort(arr,0,n-1);
}
int main(){
    int n=1000000;
    static int *arr1=SortTestHelper::generateRandomArray(n,0,10);
//    int *arr2=SortTestHelper::copyIntArray(arr1,n);
//    SortTestHelper::testSort("merge Sort",mergeSort,arr1,n);
    SortTestHelper::testSort("quick Sort",quickSort,arr1,n);
    delete[] arr1;
//    delete[] arr2;
//    int swapTimes=100;
//    arr1=SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
//    arr2=SortTestHelper::copyIntArray(arr1,n);
//    SortTestHelper::testSort("merge Sort",mergeSort,arr1,n);
//    SortTestHelper::testSort("quick Sort",quickSort,arr2,n);
//    delete[] arr1;
//    delete[] arr2;
}
