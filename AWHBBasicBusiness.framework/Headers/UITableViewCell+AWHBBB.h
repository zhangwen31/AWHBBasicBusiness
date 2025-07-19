//
//  UITableViewCell+AWHBBB.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2023/7/8.
//

#import <UIKit/UIKit.h>

//cell类型
typedef NS_ENUM(NSInteger) {
    AWHBBTableViewCellTypeTop               = 0, //顶部
    AWHBBTableViewCellTypeCenter            = 1, //中间
    AWHBBTableViewCellTypeBottom            = 2,  //底部
    AWHBBTableViewCellTypeSingle            = 3,  //单一 一个cell
}AWHBBTableViewCellType;

NS_ASSUME_NONNULL_BEGIN

@interface UITableViewCell (AWHBBB)

@property (nonatomic, strong, readonly) UIView *cellLineTop;

@property (nonatomic, strong, readonly) UIView *cellLineLeft;

@property (nonatomic, strong, readonly) UIView *cellLeftSemicircleTop;

@property (nonatomic, strong, readonly) UIView *cellLeftSemicircleBottom;

@property (nonatomic, strong, readonly) UIView *cellLineRight;

@property (nonatomic, strong, readonly) UIView *cellRightSemicircleTop;

@property (nonatomic, strong, readonly) UIView *cellRightSemicircleBottom;

@property (nonatomic, strong, readonly) UIView *cellLineBottom;

//是否展示线框
@property (nonatomic, assign) BOOL isShowWireframe;

- (void)setupUI;

- (void)setupUIWithRadius:(CGFloat)radius lineColor:(UIColor *)lineColor;
//设置cell样式
- (void)setupCellType:(AWHBBTableViewCellType)type;

@end

NS_ASSUME_NONNULL_END
