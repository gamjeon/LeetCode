//
//  main.cpp
//  7.整型树反转
//
//  Created by Laugamjeon on 2017/10/24.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
//假定输入一个32位带符号整形数，反转这个整形数，如果反转数溢出的话则输出0；

#include <iostream>

int main(int argc, const char * argv[]) {
    long long x;
    std::cin>>x;
    long long res = 0;
    while(x){
        res = x%10 +res*10;
        x = x/10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}
