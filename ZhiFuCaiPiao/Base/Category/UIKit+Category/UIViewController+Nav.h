//
//  UIViewController+Nav.h
//  gongwuche_ios_driver
//
//  Created by 讯心科技 on 2017/5/2.
//  Copyright © 2017年 讯心科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UINavigationController+extend.h"


// UIViewController 导航扩充
@interface UIViewController (Nav)


/**
 *  父级 ViewController
 */
@property (nonatomic, weak) UIViewController * parentVC;

/**
 *  用于界面间传递参数，viewDidLoad 时 self.param 获取
 */
@property (nonatomic, strong) id param;


/**
 *  从对应的storyboard中 获取指定的ViewController
 *
 *  @param storyboardName storyboard name
 *  @param key            storyboard viewcontroller name
 *
 *  @return ViewController
 */
+ (UIViewController *)getViewControllerFormStoryboardName:(NSString *)storyboardName key:(NSString *)key;

/**
 *  通过字符串类名查找ViewController
 *
 *  @param key 要查找的ViewController所对应的类名(不明白可看具体实现)
 *
 *  @return ViewController
 */
- (UIViewController *)getControllerWithKey:(NSString *)key;


/**
 *  push storyboard 的初始化界面
 *
 *  @param storyBoardName storyBoard 名字
 *  @param param          界面传参
 *  @param animated       是否动画
 *
 *  @return 已经初始化的控制器
 */
- (id)pushInstantiateIntiaViewController:(NSString *)storyBoardName
                                   param:(id)param
                                animated:(BOOL)animated;

/**
 *  push storyboard 的初始化界面
 *
 *  @param storyBoardName storyBoard 名字
 *  @param param          界面传参
 *
 *  @return 已经初始化的控制器
 */
- (id)pushInstantiateIntiaViewController:(NSString *)storyBoardName
                                   param:(id)param;


/**
 *  push viewController
 *
 *  @param viewController viewController
 *  @param param          界面传参
 *  @param animated       是否动画
 *
 *  @return 已经初始化对控制器
 */
- (id)pushViewController:(UIViewController *)viewController
                   param:(id)param
                animated:(BOOL)animated;

/**
 *  push viewController
 *
 *  @param storyboardKey     storyboard的名字
 *  @param viewControllerKey viewController 在 storyboard 中的 key
 *  @param param             界面传参
 *  @param animated          是否动画
 *
 *  @return 已经初始化对控制器
 */
- (id)pushStoryboardKey:(NSString *)storyboardKey
      viewControllerKey:(NSString *)viewControllerKey
                  param:(id)param
               animated:(BOOL)animated;


/**
 *  push viewController 开启动画
 *
 *  @param storyboardKey     storyboard的名字
 *  @param viewControllerKey viewController 在 storyboard 中的 key
 *  @param param             界面传参
 *
 *  @return 已经初始化对控制器
 */
- (id)pushStoryboardKey:(NSString *)storyboardKey
      viewControllerKey:(NSString *)viewControllerKey
                  param:(id)param;

/**
 *  push viewController
 *
 *  @param viewControllerKey viewController 在 storyboard 中的 key
 *  @param param             界面传参
 *  @param animated          是否动画
 *
 *  @return 已经初始化对控制器
 */
- (id)pushViewControllerKey:(NSString *)viewControllerKey
                      param:(id)param
                   animated:(BOOL)animated;

/**
 *  push viewController , 开启动画
 *
 *  @param viewControllerKey viewController 在 storyboard 中的 key
 *  @param param             界面传参
 *
 *  @return 已经初始化对控制器
 */
- (id)pushViewControllerKey:(NSString *)viewControllerKey
                      param:(id)param;

/**
 *  present viewController ( 模态推出 )
 *
 *  @param storyboardKey     storyboard的名字
 *  @param viewControllerKey viewController 在 storyboard 中的 key
 *  @param param             界面传参
 *
 *  @return 已经初始化对控制器
 */
- (id)presentStoryboardKey:(NSString *)storyboardKey
         viewControllerKey:(NSString *)viewControllerKey
                     param:(id)param;

/**
 *  动画过渡，替换栈内控制器, 通过字符串索引到控制器
 *
 *  @param viewControllerKey   要替代的viewController 在 storyboard 中的 key
 *  @param toStoryboardKey     storyboard的名字
 *  @param toViewControllerKey viewController 在 storyboard 中的 key
 *  @param param               界面传参
 *  @param animation            是否动画
 *
 *  @return 已经初始化的控制器
 */
- (id)replaceViewControllerKey:(NSString *)viewControllerKey
               toStoryboardKey:(NSString *)toStoryboardKey
           toViewControllerKey:(NSString *)toViewControllerKey
                         param:(id)param
                     animation:(UINavigationControllerAnimation)animation;


/**
 *  动画过渡，替换栈内控制器，self 到 新的指定控制器
 *
 *  @param toStoryboardKey     storyboard的名字
 *  @param toViewControllerKey viewController 在 storyboard 中的 key
 *  @param param               界面传参
 *  @param animation            是否动画
 *
 *  @return 已经初始化的控制器
 */
- (id)replaceToStoryboardKey:(NSString *)toStoryboardKey
         toViewControllerKey:(NSString *)toViewControllerKey
                       param:(id)param
                   animation:(UINavigationControllerAnimation)animation;


/**
 *  动画过渡，替换栈内控制器， 栈内所有控制器出栈，新的指定控制器如栈
 *
 *  @param toStoryboardKey     storyboard的名字
 *  @param toViewControllerKey viewController 在 storyboard 中的 key
 *  @param param               界面传参
 *  @param animation            是否动画
 *
 *  @return 已经初始化的控制器
 */
- (id)replaceAllToStorayboardKey:(NSString *)toStoryboardKey
             toViewControllerKey:(NSString *)toViewControllerKey
                           param:(id)param
                       animation:(UINavigationControllerAnimation)animation;


/**
 *  动画过渡，替换underViewController之上的控制器, 通过key索引
 *
 *  @param underViewControllerKey underViewController 在storyboard 中的key
 *  @param toStoryboardKey     storyboard的名字
 *  @param toViewControllerKey viewController 在 storyboard 中的 key
 *  @param param               界面传参
 *  @param animation            是否动画
 *
 *  @return 已经初始化的控制器
 */
- (id)replaceUnderViewControllerKey:(NSString *)underViewControllerKey
                    toStoryboardKey:(NSString *)toStoryboardKey
                toViewControllerKey:(NSString *)toViewControllerKey
                              param:(id)param
                          animation:(UINavigationControllerAnimation)animation;



@end
