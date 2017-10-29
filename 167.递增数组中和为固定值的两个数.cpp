//
//  main.cpp
//  167.递增数组中和为固定值的两个数
//
//  Created by Laugamjeon on 2017/10/29.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  在一个递增数组中，找出和为固定值的两个数
 *  并没有太多的技巧，设置高低指针从两边向中间夹逼即可
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int len = (int)numbers.size();
    int low = 0;
    int high = len-1;
    vector<int> res;
    while(low < high){
        if((numbers[low] + numbers[high]) == target){
            res.push_back(low+1);
            res.push_back(high+1);
            return res;
        }
        else if((numbers[low] + numbers[high]) < target) ++low;
        else --high;
    }
    return res;
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    return 0;
}
