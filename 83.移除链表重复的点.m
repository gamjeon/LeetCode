//
//  main.m
//  83.移除链表重复的点
//
//  Created by Laugamjeon on 2018/1/3.
//  Copyright © 2018年 Laugamjeon. All rights reserved.
//
/** 删除链表中重复的点
 *  快慢指针
 */

#import <Foundation/Foundation.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *pre = head;
    struct ListNode *lat = head;
    while(lat != NULL){
        lat = lat->next;
        if(lat == NULL){
            pre->next = lat;
            break;
        }
        else if (lat->val != pre->val){
            pre->next = lat;
            pre = lat;
        }
    }
    return head;
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    }
    return 0;
}
