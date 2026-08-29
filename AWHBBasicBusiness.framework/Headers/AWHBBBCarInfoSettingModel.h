//
//  AWHBBBCarInfoSettingModel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2026/3/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBCarInfoSettingModel : NSObject<NSCopying, NSMutableCopying>

/**
 * 是否展示车牌号码
 */
@property(nonatomic, assign) BOOL showPlate;
/**
 * 是否展示车辆名称
 */
@property(nonatomic, assign) BOOL showName;
/**
 * 是否展示车牌颜色
 */
@property(nonatomic, assign) BOOL showColor;
/**
 * 是否展示车辆ACC
 */
@property(nonatomic, assign) BOOL showAcc;
/**
 * 是否展示车辆状态
 */
@property(nonatomic, assign) BOOL showState;

@end

NS_ASSUME_NONNULL_END
