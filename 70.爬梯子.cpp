//
//  main.cpp
//  70.爬梯子
//
//  Created by Laugamjeon on 2017/10/31.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  有一个n层的楼梯，每次可以爬一步或者爬两步，问有多少种方法可以爬上去。
 *  从最后一层开始想，可以从倒数第二或者倒数第一层去跳。
 */

#include <iostream>

int climbStairs(int n) {
    int fn1 = 0;
    int fn2 = 1;
    while(n){
        fn2 = fn1 + fn2;
        fn1 = fn2 - fn1;
        --n;
    }
    return fn2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
