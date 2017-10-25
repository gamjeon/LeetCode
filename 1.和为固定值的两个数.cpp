//
//  main.cpp
//  1.和为固定值的两个数
//
//  Created by Laugamjeon on 2017/10/25.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/* 给出一个数组和固定值，找出数组中两个数和为固定值的数组队返回。
 *
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    vector<int> res;
    for(int i = 0; i < nums.size(); ++i){

        int left = target- nums[i];
        // 如果剩余的值在map中key有找到的话，输出并退出
        if(map.find(left) != map.end()){
            res.push_back(map[left]);
            res.push_back(i);
            return res;
        }
        //没有找到的话，将这个值放到map中，key为值，value为下标；
        map[nums[i]] = i;
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int>nums;
    for(int i = 0; i < 10; ++i){
        int num;
        std::cin>>num;
        nums.push_back(num);
    }
    int target = 10;
    vector<int> res = twoSum(nums,target);
    return 0;
}
