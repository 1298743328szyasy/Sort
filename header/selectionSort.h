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
    //从第一个数开始一直比到最后一个将最小的数放在第一位
    //再比较第二个   以此类推
    //会从头一直进行下去   知道确认每一个最小的数都在合适位置
    //比较笨拙   不会提前停止。
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[minIndex]>arr[j])
                minIndex=j;
        swap(arr[i],arr[minIndex]);
    }
}
#endif //SORT_SELECTIONSORT_H
