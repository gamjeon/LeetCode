//
//  main.cpp
//  695.岛屿最大面积
//
//  Created by Laugamjeon on 2017/12/1.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/** 给定一个二维矩阵，默认矩阵外都为0，在矩阵里，1代表岛屿，求岛屿的最大面积
 *  遍历矩阵，当遇到一个岛屿的时候，就求这个岛屿以及他附近包含的最大面积，然后跟历史最大值比较
 */

#include <iostream>
#include <vector>

using namespace std;

int islandSize(vector<vector<int>>&grid, int i, int j){
    if(i >=0 && i < grid.size() && j>=0 && j < grid[0].size() && grid[i][j] == 1){
        grid[i][j] = 0;
        return 1 + islandSize(grid,i+1,j) + islandSize(grid,i-1,j) + islandSize(grid,i,j+1) + islandSize(grid,i,j-1);
    }
    return 0;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int row = grid.size()-1;
    int col = grid[0].size()-1;
    int maxsize = 0;
    for(int i = 0; i <= row; ++i){
        for(int j = 0; j <= col; ++j){
            if(grid[i][j] == 1) maxsize = max(maxsize,islandSize(grid,i,j));
        }
    }
    return maxsize;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
