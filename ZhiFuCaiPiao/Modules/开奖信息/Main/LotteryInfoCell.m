//
//  LotteryInfoCell.m
//  ZhiFuCaiPiao
//
//  Created by 讯心科技 on 2017/6/20.
//  Copyright © 2017年 张诗健. All rights reserved.
//

#import "LotteryInfoCell.h"

@implementation LotteryInfoCell


- (void)setHighlighted:(BOOL)highlighted
{
    [super setHighlighted:highlighted];
    
    [UIView animateWithDuration:0.2 animations:^{
        
        self.backgroundColor = highlighted ? [UIColor colorWithHexString:@"f0f0f0"] : [UIColor whiteColor];
    }];
}

@end
