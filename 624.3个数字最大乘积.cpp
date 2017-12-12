//
//  main.cpp
//  624.3个数字最大乘积
//
//  Created by Laugamjeon on 2017/12/8.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 数组中3个数字的最大和，解法--》排序，0*1*【n】比较【n】*【n-1】*【n-2】；
 *  通过这一次，看出之前的快排掌握还没掌握得特别扎实，需要记住快排由2部分组成，一个主函数，一个partition函数，主函数需要递归，partition 函数需要递归，加油～
 */

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& nums, int start, int end){
    int pivot = nums[start];
    while(start < end){
        while(nums[end] >= pivot && start < end) --end;
        swap(nums[start],nums[end]);
        while(nums[start] <= pivot && start < end ) ++start;
        swap(nums[end],nums[start]);
    }
    nums[start] = pivot;
    return start;
}


void quicksort(vector<int>&nums,int start, int end){
    if(start < end){
        int index = partition(nums,start,end);
        quicksort(nums,start,index);
        quicksort(nums,index+1,end);
    }
}



int maximumProduct(vector<int>& nums) {
    int len = nums.size();
    int start = 0;
    int end = len-1;
    quicksort(nums,start,end);
    int positive =  nums[len-1]*nums[len-2]*nums[len-3];
    int negative = nums[0]*nums[1]*nums[len-1];
    return  positive > negative ? positive :negative;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
