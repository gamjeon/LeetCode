//
//  main.cpp
//  624.最长递增序列
//
//  Created by Laugamjeon on 2017/12/22.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int max = 0;
    int count = 0;
    int firstkey;
    for(int i = 0; i < nums.size(); ++i){
        if(i == 0) {
            firstkey = nums[i];
            count = 1;
            continue;
        }
        if(nums[i] > firstkey){
            firstkey = nums[i];
            ++count;
        }
        else{
            firstkey = nums[i];
            if(count > max) max = count;
            count = 1;
        }
    }
    if(count > max) max = count;
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
