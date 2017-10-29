//
//  main.cpp
//  206.反转链表
//
//  Created by Laugamjeon on 2017/10/29.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  反转链表
 *  这道题实际上也是之前做过，用的是非递归的方法，利用两个指针去实现，比较疑惑的是，为什么23和26行，把->next放到26中就会不通过。
 */

#include <iostream>

struct ListNode {
    int    value;
    ListNode* next;
};

ListNode* reverseList(ListNode* head) {
    ListNode* pre = NULL;
    ListNode* nex = NULL;
    while(head){
        nex = head->next;
        head->next = pre;
        pre = head;
        head = nex;
    }
    return pre;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
