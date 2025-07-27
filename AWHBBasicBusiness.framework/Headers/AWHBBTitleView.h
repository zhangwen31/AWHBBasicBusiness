//
//  XTitleView.h
//  PageViewDemo
//  https://github.com/MrLSPBoy/PageViewController
//  Created by Object on 17/7/11.
//  Copyright © 2017年 Object. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AWHBBTitleStyle.h"
@class AWHBBTitleView;
@protocol AWHBBTitleViewDelegate <NSObject>

- (void)titleViewWithTitleView:(AWHBBTitleView *)titleView selectedIndex:(NSInteger)selectedIndex;

@end


@interface AWHBBTitleView : UIView

- (AWHBBTitleView *)initWithFrame:(CGRect)frame titles:(NSArray <NSString *>*)titles style:(AWHBBTitleStyle *)style;

- (void)setTitleWithProgress:(CGFloat)progress sourceIndex:(NSInteger)sourceIndex targetIndex:(NSInteger)targetIndex;

- (void)contentViewDidEndScroll;

//更新标题内容
- (void)updateTitles:(NSArray <NSString *>*)titles;

@property(nonatomic, weak) id<AWHBBTitleViewDelegate> delegate;


@end
