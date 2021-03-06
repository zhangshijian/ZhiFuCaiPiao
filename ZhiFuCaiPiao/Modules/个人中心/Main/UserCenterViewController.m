//
//  OtherViewController.m
//  ZhiFuCaiPiao
//
//  Created by 讯心科技 on 2017/6/27.
//  Copyright © 2017年 张诗健. All rights reserved.
//

#import "UserCenterViewController.h"


@interface UserCenterViewController ()<UITableViewDelegate, UITableViewDataSource>

@end

@implementation UserCenterViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [self createAndSetRightButtonWithTitle:@"登录" touchUpInsideAction:@selector(login)];
}

- (void)login
{
    [self presentViewController:[UIViewController getViewControllerFormStoryboardName:@"Login" key:@"LoginNaviViewController"] animated:YES completion:nil];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UserCenterCell" forIndexPath:indexPath];
    
    cell.textLabel.text = @"常见问题";
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    [self pushViewControllerKey:@"CommonProblemViewController" param:nil animated:YES];
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
