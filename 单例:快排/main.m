//
//  main.m
//  快排
//
//  Created by Laugamjeon on 2017/10/26.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sort.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Sort *SortManager = [Sort shareInstance];
        NSMutableArray *arr = [NSMutableArray arrayWithObjects:@1,@7,@7,@4,@56,@6,@45,@6,@54,@32,@56,@12,@4,@9,@7,@32,@57, nil];
        [SortManager quickSort:arr firstKey:0 lastKey:arr.count-1];
        for (int i = 0; i < arr.count; ++i) {
            NSLog(@"%d",[arr[i]integerValue]);
        }
    }
    return 0;
}
