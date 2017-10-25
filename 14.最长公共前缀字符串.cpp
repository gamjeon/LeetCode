//
//  main.cpp
//  14.最长公共前缀字符串
//
//  Created by Laugamjeon on 2017/10/25.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给定一组字符串，找他们的最长公共前缀。
 *  首先以第一个字符串为基准，分别与其他所有的字符串逐个做比较，如果不相等，则取其短。
*/

#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
    string s = strs[0];
    for(int i = 1; i < strs.size(); ++i){
        int j = 0;
        while(s[j] && strs[i][j] && s[j] == strs[i][j]) ++j;
        s = s.substr(0,j);
    }
    return s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
