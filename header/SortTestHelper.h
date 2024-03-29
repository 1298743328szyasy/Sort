#pragma once
#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H
#include <iostream>
#include <ctime>
#include <cassert>
#include <string>
using namespace std;
namespace SortTestHelper {
    //设置随机数函数
    int* generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeL <= rangeR);
        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++)
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        return arr;
    }
    //生成一个近乎有序的数组
    int *generateNearlyOrderedArray(int n,int swapTimes){
        int *arr=new int [n];
        for(int i=0;i<n;i++)
            arr[i]=i;
        srand(time(NULL));
        //无序的个数
        for(int i=0;i<swapTimes;i++){
            int posx=rand()%n;
            int posy=rand()%n;
            swap(arr[posx],arr[posy]);
        }
        return arr;
    }
    //打印函数
    template<typename T>
    void pringArray(T arr, int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }
    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            if (arr[i + 1] < arr[i])
                return false;
        return true;
    }
    template<typename T>
    void testSort(string sortName, void(*sort)(T[], int), T arr[], int n) {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        cout << sortName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
        return;
    }
    int *copyIntArray(int a[], int n) {
        int *arr = new int[n];
        copy(a, a + n, arr);
        return arr;
    }
}
#endif // !SELECTIONSORT_SORTTESTHELPER_H
