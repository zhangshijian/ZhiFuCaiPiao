//
//  DivinationDescriptionViewController.m
//  ZhiFuCaiPiao
//
//  Created by 张诗健 on 2017/7/9.
//  Copyright © 2017年 张诗健. All rights reserved.
//

#import "DivinationDescriptionViewController.h"
#import "LotteryBettingViewController.h"


@interface DivinationDescriptionViewController ()

@end

@implementation DivinationDescriptionViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.title = @"周易预测-双色球";
    
    [self createAndSetRightButtonWithTitle:@"投注" touchUpInsideAction:@selector(touZhu)];
}



#pragma mark-
- (void)touZhu
{
    [self pushViewController:[[LotteryBettingViewController alloc] init] param:@"http://wap.lecai.com/lottery/" animated:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
