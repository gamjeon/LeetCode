//
//  main.cpp
//  27.去除数组指定元素
//
//  Created by Laugamjeon on 2017/10/26.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//
/*  给定一个数组和一个固定值，去除数组中的与固定值相等的元素
 *  维持一个count下标，指向没有固定值的数组，当遇到固定值时，下标不移动，遇到非固定值时，将该值赋给下标所在的值，然后下标+1；
 */

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int count = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != val) nums[count++] = nums[i];
    }
    return count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> arr;
    for (int i = 0; i < 3; ++i) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int val;
    cin >> val;
    cout<<removeElement(arr,val)<<endl;
    return 0;
}
