//
//  main.cpp
//  724.找出中值下标
//
//  Created by Laugamjeon on 2017/11/29.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 给定一个数组，找出一个下标使得下标左边的和等于右边的和
 *  首先求一个总和，然后从第一个数遍历求和，和的两倍等于总和减当前值，那么当前值就是那个数，输出下标
 */

#include <iostream>
#include <vector>

using namespace std;


int pivotIndex(vector<int>& nums) {
    int len = nums.size();
    if(!len) return -1;
    int total = 0;
    for(int num : nums) total += num;
    int sum = 0;
    for(int i = 0; i < len; sum += nums[i++]){
        if(sum*2 == total - nums[i]) return i;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
