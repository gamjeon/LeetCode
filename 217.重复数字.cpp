//
//  main.cpp
//  217.重复数字
//
//  Created by Laugamjeon on 2017/10/31.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  判断数组中有没有重复的数字
 *  判断nums的set的大小和nums的大小是不是相等
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    return nums.size() == set<int>(nums.begin(),nums.end()).size()? false :true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
