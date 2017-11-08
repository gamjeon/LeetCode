//
//  main.cpp
//  最多连续1的个数
//
//  Created by Laugamjeon on 2017/11/8.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给出一个数组，只含有0和1，求出连续1的最大个数
 *  跟连续子数组求最大和一个道理
 */

#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] == 0) count = 0;
        else ++count;
        if(count > max) max = count;
    }
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
