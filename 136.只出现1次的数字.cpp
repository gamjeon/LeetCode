//
//  main.cpp
//  136.只出现1次的数字
//
//  Created by Laugamjeon on 2017/11/2.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  一个数组中，其他元素都出现了2次，唯独一个元素出现了1次，找出该元素。
 *  异或异或异或
 */

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int len = (int)nums.size();
    int num = 0;
    for(int i = 0; i < len; ++i){
        num ^= nums[i];
    }
    return num;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
