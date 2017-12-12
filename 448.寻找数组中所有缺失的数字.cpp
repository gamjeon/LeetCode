//
//  main.cpp
//  448.寻找数组中所有缺失的数字
//
//  Created by Laugamjeon on 2017/12/3.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 给出一个长度为n的数组，元素分布在[1,n]中，找出其中缺失的数组
 *
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int i = 0;
    while(i < nums.size()){
        if(nums[i] != nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
        else ++i;
    }
    vector<int> res;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != i+1)  res.push_back(i+1);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
