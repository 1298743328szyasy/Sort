//
// Created by songai on 2019/9/3.
//

#ifndef SORT_SHELLSORT_H
#define SORT_SHELLSORT_H
#include <iostream>
#include <algorithm>
using namespace std;
//希尔排序是间隔逐渐从大到小的插入排序	一开始的间隔可以很大但会使第一次排序时间太长 	可以一开始拉开一段距离然后距离逐渐减小	 开始先大体排序	后来距离缩短后因有之前的基础也不会花费太多时间
//时间有一个均衡值	开始拉的距离太长	之后需要做的工作也会越多	时间不会无限缩短。
template<typename T>
void shellSort(T arr[],int n) {
    int h = 1;
    while (h < n / 2)
        h = 2 * h + 1;
    while(h>=1){
        for(int i=h;i<n;i++){
            T e = arr[i];
            int j;
            for(j=i;j>=h&&e<arr[j-h];j-=h)
                arr[j]=arr[j-h];
            arr[j]=e;
        }
        h/=2;
    }
}
#endif //SORT_SHELLSORT_H
