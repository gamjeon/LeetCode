//
//  main.cpp
//  205.同样构成的字符串
//
//  Created by Laugamjeon on 2017/12/27.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//

#include <iostream>

bool isIsomorphic(string s, string t) {
    int m[255] = {0};
    int n[255] = {0};
    int len = s.size();
    for(int i = 0; i < len; ++i){
        if(m[s[i]] != n[t[i]]) return false;
        m[s[i]] = i+1;
        n[t[i]] = i+1;
    }
    return true;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
