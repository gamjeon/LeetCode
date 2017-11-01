//
//  main.cpp
//  191.1的位数
//
//  Created by Laugamjeon on 2017/11/1.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  这个n&（n-1）的意思是，将n上面最靠近左边的1改为0；
 *
 */

#include <iostream>


int hammingWeight(uint32_t n) {
    int count = 0;
    while(n){
        n = n & (n-1);
        ++count;
    }
    return count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
