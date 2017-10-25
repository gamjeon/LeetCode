//
//  main.cpp
//  9.回文数
//
//  Created by Laugamjeon on 2017/10/24.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
// 输入一个整形数，判断是不是回文数。题目要求不使用额外的空间有误，实际上必须使用辅助空间。
/**
  * 初始化一个整形数，根据反转整形数的方法，将原来的x不断减少，mir不断增加，如果x是奇数位数，则判断 x == mir/10
  * 如果x是偶数位数，则判断 x == mir
**/
#include <iostream>

bool isPalindrome(int x) {
    if(x < 0 ||(x != 0 && x%10 == 0)) return false;
    int mir = 0;
    while(x > mir){
        mir = mir*10 +x%10;
        x = x/10;
    }
    return (x == mir) || (x == mir/10);
}

int main(int argc, const char * argv[]) {
    int x;
    std::cin>>x;
    isPalindrome(x);
    return 0;
}

