//
//  quickSort.h
//  快排
//
//  Created by Laugamjeon on 2017/10/26.
//  Copyright © 2017年 Laugamjeon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sort : NSObject

+ (id)shareInstance;

- (void)quickSort:(NSMutableArray*)arr firstKey:(NSInteger)low lastKey:(NSInteger)high;
@end
