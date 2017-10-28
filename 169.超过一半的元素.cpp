//
//  main.cpp
//  169.超过一半的元素
//
//  Created by Laugamjeon on 2017/10/28.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  输入一个数组，找出其中出现次数超过一半的元素
 *  以第一个元素为基准，计数为1，当遇到相同的元素时计数加1，不同元素时计数-1；当计数为0时，替换元素。
 */

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums[0];
    int count = 1;
    for(int i = 1; i < nums.size(); ++i){
        if(nums[i] == n) ++count;
        else --count;
        if(count == 0){
            n = nums[i];
            count = 1;
        }
    }
    return n;
}


int main(int argc, const char * argv[]) {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(28);
    nums.push_back(28);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    cout<< majorityElement(nums)<<endl;
    return 0;
}
