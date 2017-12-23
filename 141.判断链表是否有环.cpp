//
//  main.cpp
//  141.判断链表是否有环
//
//  Created by Laugamjeon on 2017/12/23.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  快慢指针，跳出条件要注意～
 **
 */

#include <iostream>

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};


bool hasCycle(ListNode *head) {
    if(!head) return 0;
    ListNode *fast = head;
    ListNode *slow = head;
    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) return 1;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
