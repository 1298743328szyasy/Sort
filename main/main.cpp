//
// Created by songai on 2019/9/2.
//
#include <iostream>
#include "../header/SortTestHelper.h"
#include "../header/insertionSort.h"
#include "../header/selectionSort.h"
#include <string>
using namespace std;

template<typename T>

void shellSort(T arr[],int n) {
    int h=1;
    while(h<n/5){
        h=h*5+1;
    }
    while(h>=1){
        for(int i=h;i<n;i++) {
            T e = arr[i];
            int j;
            for (j = i; j >= h && e < arr[j - h]; j -= h)
                arr[j] = arr[j - h];
            arr[j] = e;
        }
        h/=5;
    }
}
int main(){
      int n=20000;
    cout<<"Test for random array,size = "<<n<<",random range[0,"<<n<<"]"<<endl;
    int *arr1=SortTestHelper::generateRandomArray(n,0,n);
    int *arr2=SortTestHelper::copyIntArray(arr1,n);
    int *arr3=SortTestHelper::copyIntArray(arr1,n);
    SortTestHelper::testSort("Selection Sort",selectionSort,arr1,n);
    SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);
    SortTestHelper::testSort("Shell Sort",shellSort,arr3,n);
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
      int swapTimes=100;
      cout<<"Test for nearly ordered array,size = "<<n<<",swap time="<<swapTimes<<endl;
      arr1=SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
      arr2=SortTestHelper::copyIntArray(arr1,n);
      arr3=SortTestHelper::copyIntArray(arr1,n);
      SortTestHelper::testSort("Selection Sort",selectionSort,arr1,n);
      SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);
      SortTestHelper::testSort("Shell Sort",shellSort,arr3,n);
      delete[] arr1;
      delete[] arr2;
      delete[] arr3;
}