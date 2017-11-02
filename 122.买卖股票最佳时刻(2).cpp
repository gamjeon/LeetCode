//
//  main.cpp
//  122.买卖股票最佳时刻(2)
//
//  Created by Laugamjeon on 2017/11/2.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给出一个数组，里面元素代表股票在每一天的价格，允许多次买卖的情况下，找出收益最大的数字
 *  思路：只要有差价就进行买卖操作。
 */

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int len = (int)prices.size();
    int sum = 0;
    for(int i = 0; i < len-1; ++i){
        if(prices[i] < prices[i+1]) sum += prices[i+1]-prices[i];
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
