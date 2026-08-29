//
//  AWHBBBaseViewController.h
//  ShengMinghuan
//
//  Created by Cnsunrun on 15/12/31.
//  Copyright (c) 2015年 hxsr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AWHBBBaseViewController : UIViewController

@property (nonatomic,readonly,strong)UIButton *leftBackButton;
@property(nonatomic,assign)BOOL isCanPop;
@property(nonatomic,assign)BOOL isNoCanPop;
- (void)back;
- (UIImage *)gradientImageWithBounds:(CGRect)bounds;
// 刷新UI
- (void)refreshUI;

@end
