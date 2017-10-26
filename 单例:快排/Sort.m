//
//  quickSort.m
//  快排
//
//  Created by Laugamjeon on 2017/10/26.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//

#import "Sort.h"


@implementation Sort
#pragma -mark 单例模式
static id singleton;

+ (instancetype)allocWithZone:(struct _NSZone *)zone{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        singleton = [super allocWithZone:zone];
    });
    return singleton;
}

- (id)copyWithZone:(NSZone *)zone{
    return singleton;
}

- (id)mutableCopyWithZone:(NSZone *)zone{
    return singleton;
}

+ (id)shareInstance{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        singleton = [[self alloc]init];
    });
    return  singleton;
}


#pragma -mark 快排
- (void)quickSort:(NSMutableArray*)arr firstKey:(NSInteger)low lastKey:(NSInteger)high{
    if(low < high){
        NSInteger pivot = [self partition:arr firstKey:low lastKey:high];
        [self quickSort:arr firstKey:low lastKey:pivot];
        [self quickSort:arr firstKey:pivot+1 lastKey:high];
    }
}
- (NSInteger)partition:(NSMutableArray*)arr firstKey:(NSInteger)low lastKey:(NSInteger)high{
    NSInteger pivotKey = [arr[low]integerValue];
    NSInteger temp = pivotKey;
    while (low < high) {
        while (low < high && [arr[high] integerValue] >= pivotKey) --high;
        arr[low] = arr[high];
        while (low <high && [arr[low] integerValue] <= pivotKey) ++low;
        arr[high] = arr[low];
    }
    arr[low] = [NSNumber numberWithInteger:temp];
    return low;
}

@end
