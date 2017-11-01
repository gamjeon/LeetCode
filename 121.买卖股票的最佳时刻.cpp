//
//  main.cpp
//  121.买卖股票的最佳时刻
//
//  Created by Laugamjeon on 2017/11/1.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给出一无序数组，找到什么时候其中两个值的差值最大
 *  设定一个最小数min以及差值sum，当遇到比min小的数就替换，然后continue，遇到比min大的数就计算差值，如果差值比sum大，则替换sum
 */

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int len = (int)prices.size();
    if(!len) return 0;
    int min = prices[0];
    int sum = 0;
    for(int i = 1; i < len; ++i){
        if(prices[i] < min){
            min = prices[i];
            continue;
        }
        if((prices[i] - min) > sum){
            sum = prices[i] - min;
        }
    }
    return sum;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
