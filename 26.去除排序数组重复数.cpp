//
//  main.cpp
//  26.去除排序数组重复数
//
//  Created by Laugamjeon on 2017/10/26.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给定一个排序数组，输出去重后数组的长度；
 *  维持一个下标，如果遇到不相同的数，则赋值给下标所在的数，下标加1；如果遇到相同的数则不处理。
 */

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() < 2) return (int)nums.size();
    int count = 1;
    for(int i = 1; i < nums.size(); ++i){
        if(nums[i] != nums[i-1]) nums[count++] = nums[i];
    }
    return count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> arr;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<removeDuplicates(arr)<<endl;
    return 0;
}
