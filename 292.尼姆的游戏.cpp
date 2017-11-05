//
//  main.cpp
//  292.尼姆的游戏
//
//  Created by Laugamjeon on 2017/11/3.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  有一个堆石头，每次只能够取1-3个，问给出这堆石头的个数，先取的能不能赢。
 *  双方每次取的总的个数为4，有n%4有余数的话则先取的赢，没有的话则后取的赢
 */

#include <iostream>

bool canWinNim(int n) {
    return n%4 == 0? false :true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
