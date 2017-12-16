//
//  main.cpp
//  605.可以种花的地方
//
//  Created by Laugamjeon on 2017/12/16.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 给出一个数组，由0和1组成，1不可以连续，问可以插入多少个1；
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int len = flowerbed.size();
    int count = 1;
    int result = 0;
    for(int i = 0; i < len; ++i){
        if(flowerbed[i] == 0){
            ++count;
        }
        else{
            result += (count-1)/2;
            count = 0;
        }
    }
    if(count ) result += count/2;
    return n <= result ;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
