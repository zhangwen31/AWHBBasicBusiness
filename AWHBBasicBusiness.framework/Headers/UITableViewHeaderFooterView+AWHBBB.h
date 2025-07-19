//
//  UITableViewHeaderFooterView+AWHBBB.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2023/7/8.
//

#import <UIKit/UIKit.h>

//HeaderFooter类型
typedef NS_ENUM(NSInteger) {
    AWHBBTableViewHeaderFooterTypeTop               = 0, //顶部
    AWHBBTableViewHeaderFooterTypeCenter            = 1, //中间
    AWHBBTableViewHeaderFooterTypeBottom            = 2,  //底部
    AWHBBTableViewHeaderFooterTypeSingle            = 3,  //单一 一个HeaderFooter
}AWHBBTableViewHeaderFooterType;

NS_ASSUME_NONNULL_BEGIN

@interface UITableViewHeaderFooterView (AWHBBB)

@property (nonatomic, strong, readonly) UIView *HeaderFooterLineTop;

@property (nonatomic, strong, readonly) UIView *HeaderFooterLineLeft;

@property (nonatomic, strong, readonly) UIView *HeaderFooterLeftSemicircleTop;

@property (nonatomic, strong, readonly) UIView *HeaderFooterLeftSemicircleBottom;

@property (nonatomic, strong, readonly) UIView *HeaderFooterLineRight;

@property (nonatomic, strong, readonly) UIView *HeaderFooterRightSemicircleTop;

@property (nonatomic, strong, readonly) UIView *HeaderFooterRightSemicircleBottom;

@property (nonatomic, strong, readonly) UIView *HeaderFooterLineBottom;
//是否展示线框
@property (nonatomic, assign) BOOL isShowWireframe;

- (void)setupUI;

- (void)setupUIWithRadius:(CGFloat)radius lineColor:(UIColor *)lineColor;
//设置样式
- (void)setupHeaderFooterType:(AWHBBTableViewHeaderFooterType)type;
//设置样式  height 向下延伸多少
- (void)setupHeaderFooterType:(AWHBBTableViewHeaderFooterType)type addHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
