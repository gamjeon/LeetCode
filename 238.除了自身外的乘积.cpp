//
//  main.cpp
//  238.除了自身外的乘积
//
//  Created by Laugamjeon on 2017/12/12.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 求出数组中除了自己以外所有数的的乘积
 *  从前往后乘一次，再从后往前乘一次。需要注意的是第18行，没有设置res的大小就通过不了
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res(nums.size());
    res[0] = 1;
    for(int i = 1; i < nums.size(); ++i){
        res[i] = nums[i-1]*res[i-1];
    }
    int right = 1;
    for(int i = nums.size()-1; i >= 0; --i){
        res[i] *= right;
        right *= nums[i];
    }
    return res;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
