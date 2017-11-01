//
//  main.cpp
//  268.缺失的数字
//
//  Created by Laugamjeon on 2017/10/31.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  有n个数字分别从0-n排布，其中缺失一个数字，找出该数字；
 *  分别与所有的数字、0-n异或一次，得出的结果就是缺失的数字
 */

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int i = 0;
    int res = 0;
    for(i; i < nums.size(); ++i){
        // nums[i]就是所有的数字
        // i就是0-n
        res = res ^ i ^ nums[i];
    }
    return res ^ i;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
