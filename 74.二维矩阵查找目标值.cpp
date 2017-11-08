//
//  main.cpp
//  74.二维矩阵查找目标值
//
//  Created by Laugamjeon on 2017/11/8.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给出一个二维矩阵，行上的值从左到右递增，列上的值从上到下递增，找出目标值
 *  从左下角开始，一直往右上角走
 */

#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(!matrix.size()) return false;
    int row = (int)matrix.size()-1;
    int col = (int)matrix[0].size()-1;
    int i = row;
    int j = 0;
    while(i >= 0 && j <= col){
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] > target) --i;
        else ++j;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
