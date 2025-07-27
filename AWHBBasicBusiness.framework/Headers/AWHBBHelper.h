//
//  AWHBBHelper.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBHelper : NSObject

+(NSString *) imageUrlString:(NSString *)rawString;

+(UILabel *) labelTitle;
+(UILabel *) labelSubTitle;
+(UILabel *) labelSubTitleInstruction;
//+(UILabel *) labelSubTitleHighlightedInstruction;
//+(NSString *) priceFromRead:(NSString *)price;
+ (NSString *)getVersionCode;

///中竖线(默认高度为1)
+ (UIView *)verticalLineWithSuperView:(UIView *)view;
///中竖线 上下都为0
+ (UIView *)verticalLineWithSuperView:(UIView *)view withBorderHeight:(NSInteger )border;
///中竖线 设置上下距离
+ (UIView *)verticalLineWithSuperView:(UIView *)view withTopDistance:(NSInteger )tdistance andBottomDistance:(NSInteger )bdistance;
///中竖线 设置上下距离以及高度
+ (UIView *)verticalLineWithSuperView:(UIView *)view withTopDistance:(NSInteger )tdistance andBottomDistance:(NSInteger )bdistance withBorderHeight:(NSInteger )border;


///下横线 默认高度为1
+ (UIView *)horizonLineWithSuperView:(UIView *)view;
///下横线  左右都为0
+ (UIView *)horizonLineWithSuperView:(UIView *)view withBorderWidth:(NSInteger )border;
///下横线  设置左右距离
+ (UIView *)horizonLineWithSuperView:(UIView *)view withLeftDistance:(NSInteger )ldistance andRightDistance:(NSInteger )rdistance;
///下横线  设置左右距离以及高度
+ (UIView *)horizonLineWithSuperView:(UIView *)view withLeftDistance:(NSInteger )ldistance andRightDistance:(NSInteger )rdistance withBorderHeight:(NSInteger )border;

@end

NS_ASSUME_NONNULL_END
