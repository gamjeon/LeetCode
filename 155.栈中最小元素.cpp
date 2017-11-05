//
//  main.cpp
//  155.栈中最小元素
//
//  Created by Laugamjeon on 2017/11/5.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  维持栈中最小元素
 *  使用2个栈，一个维持最小值，一个正常存储。当存储栈遇到比最小栈栈顶还小的元素时，把元素插入到最小栈。
    出栈时，如果存储栈遇到跟最小栈相等的元素，最小栈栈顶元素出栈。
 */

#include <iostream>
#include <stack>

using namespace std;

stack<int>stack1,stack2;

void push(int x) {
    if (stack2.empty() || x <= stack2.top()) stack2.push(x);
    stack1.push(x);
}

void pop() {
    if(stack1.top() == stack2.top()) stack2.pop();
    stack1.pop();
}

int top() {
    return stack1.top();
}

int getMin() {
    return stack2.top();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
