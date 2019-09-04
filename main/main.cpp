//
// Created by songai on 2019/9/2.
//
#include <iostream>
#include "../header/SortTestHelper.h"
#include "../header/insertionSort.h"
#include "../header/selectionSort.h"
#include "../header/shellSort.h"
#include <string>
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
int main(){
      int n=20000;
    cout<<"Test for random array,size = "<<n<<",random range[0,"<<n<<"]"<<endl;
    int *arr1=SortTestHelper::generateRandomArray(n,0,n);
    int *arr2=SortTestHelper::copyIntArray(arr1,n);
    int *arr3=SortTestHelper::copyIntArray(arr1,n);
    int *arr4=SortTestHelper::copyIntArray(arr1,n);
    int *arr5=SortTestHelper::copyIntArray(arr1,n);
    SortTestHelper::testSort("Selection Sort",selectionSort,arr1,n);
    SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);
    SortTestHelper::testSort("Shell Sort",shellSort,arr3,n);
    SortTestHelper::testSort("Bubble Sort",bubbleSort,arr4,n);
    SortTestHelper::testSort("Bubble Sort2",bubbleSort2,arr5,n);

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;
      int swapTimes=100;
      cout<<"Test for nearly ordered array,size = "<<n<<",swap time="<<swapTimes<<endl;
      arr1=SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
      arr2=SortTestHelper::copyIntArray(arr1,n);
      arr3=SortTestHelper::copyIntArray(arr1,n);
      arr4=SortTestHelper::copyIntArray(arr1,n);
      arr5=SortTestHelper::copyIntArray(arr1,n);
      SortTestHelper::testSort("Selection Sort",selectionSort,arr1,n);
      SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);
      SortTestHelper::testSort("Shell Sort",shellSort,arr3,n);
      SortTestHelper::testSort("Bubble Sort",bubbleSort,arr4,n);
      SortTestHelper::testSort("Bubble Sort2",bubbleSort2,arr5,n);
      delete[] arr1;
      delete[] arr2;
      delete[] arr3;
      delete[] arr4;
      delete[] arr5;
}