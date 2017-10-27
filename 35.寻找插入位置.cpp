//
//  main.cpp
//  35.寻找插入位置
//
//  Created by Laugamjeon on 2017/10/27.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  输入一个递增数组和一个目标值，返回目标值应该在数组中的下标。
 *  遍历数组，如果遇到大于等于目标值的话，则返回下标退出，遍历完后如果没有退出，则返回数组长度。
 */

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int len = (int)nums.size();
    for(int i = 0; i < len; ++i){
        if(nums[i] == target || nums[i] > target) return i;
    }
    return len;
}

int main(int argc, const char * argv[]) {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    int target = 7;
    cout<<searchInsert(arr, target)<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
