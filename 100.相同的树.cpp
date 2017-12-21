//
//  main.cpp
//  100.相同的树
//
//  Created by Laugamjeon on 2017/12/20.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 判断是否同一颗树 line:22 判断当前节点是否相等 line:23遍历所有节点
 *
 */

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL || q == NULL) return p == q;
    return (p->val == q->val) && (isSameTree(p->left , q->left)) && (isSameTree(p->right , q->right));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
