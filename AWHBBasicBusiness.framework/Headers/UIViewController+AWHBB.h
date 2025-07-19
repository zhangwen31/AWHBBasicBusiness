//
//  UIViewController+AWHBB.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>
//#import "AWHBRMacro.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (AWHBB)

- (void)showHudInView:(UIView *)view hint:(NSString *)hint;

- (void)showHudWithHint:(NSString *)hint;

- (void)hideHud;

- (void)showHint:(NSString *)hint;

- (void)showHint:(NSString *)hint delay:(double)delay;

// 从默认(showHint:)显示的位置再往上(下)yOffset
//- (void)showHint:(NSString *)hint yOffset:(float)yOffset;

//- (void)alerWith:(NSString *)message;

//- (void)alertWith:(NSString *)message okHandler:(void (^)(void))ok;

@end

NS_ASSUME_NONNULL_END
