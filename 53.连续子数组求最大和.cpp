//
//  main.cpp
//  53.连续子数组求最大和
//
//  Created by Laugamjeon on 2017/10/28.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给出一个数组，找出其中子数组的和的最大值。
 *  这一题，即使在牛客上面做过，一开始还是没有能够做出来，这个是动态规划的入门题。首先我们定义一个最大值，一个连续数组的和，分别都为数组第一个数。然后从第二个数开始，如果前面数组的和为负数，则判断现在这个负数跟最大值的关系，如果前面数组为整数，则判断累加后的值跟最大值的关系。
 */

#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int max = nums[0];
    int sum = nums[0];
    for(int i = 1; i < nums.size(); ++i){
        if(sum < 0){
            sum = nums[i];
            if(sum > max) max = sum;
            continue;
        }
        sum += nums[i];
        if(sum > max) max = sum;
    }
    return max;
}


int main(int argc, const char * argv[]) {
    //-2,1,-3,4,-1,2,1,-5,4
    vector<int> arr;
    arr.push_back(-2);
    arr.push_back(1);
    arr.push_back(-3);
    arr.push_back(4);
    arr.push_back(-1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(-5);
    arr.push_back(4);
    cout<<maxSubArray(arr)<<endl;
    return 0;
}
