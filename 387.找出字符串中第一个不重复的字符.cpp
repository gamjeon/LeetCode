//
//  main.cpp
//  387.找出字符串中第一个不重复的字符
//
//  Created by Laugamjeon on 2017/10/28.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给定一个字符串，找出其中第一个不重复出现的字符，如果找不到就返回-1；
 *  建一个256大的数组（可以存储包括所有ascll字符），然后以每个字符作为一个下标，去统计出现次数。统计完成以后，再遍历一次，找出次数为一的下标并且返回，如果找不到则返回-1
 */

#include <iostream>
#include <string>

using namespace std;

int firstUniqChar(string s) {
    int str[256] = {0};
    for(int i = 0; i < s.size(); ++i) ++str[s[i]];
    for(int j = 0; j < s.size(); ++j){
        if(str[s[j]] == 1) return j;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    string s = "leetcode";
    cout << firstUniqChar(s)<<endl;;
    return 0;
}
