//
//  main.cpp
//  442.找出数组中所有重复的元素
//
//  Created by Laugamjeon on 2017/12/3.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 给出长度为n的一个数组，元素处于[1,n]，找出所有重复出现的数字
 *
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
        else i++;
    }
    vector<int> res;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != i+1 ) res.push_back(nums[i]);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
