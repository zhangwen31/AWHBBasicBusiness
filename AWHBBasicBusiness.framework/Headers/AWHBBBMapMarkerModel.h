//
//  AWHBBBMapMarkerModel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBMapMarkerModel : NSObject
/**
 * 车牌背景颜色
 */
@property(nonatomic, strong) NSString *backCarColor;
/**
 * 车牌背景颜色速度背景颜色
 */
@property(nonatomic, strong) NSString *backSpeedColor;
/**
 * 字体颜色
 */
@property(nonatomic, strong) NSString *textColor;
/**
 * 色彩搭配
 * 0:自定义(#FFFFFF,#FF0024,#D7A675)
 * 1:样式一(#FFFFFF,#C2C2C2,#FF0024)
 * 2:样式二(#333333,#7AC668,#FFCC00)
 * 3:样式三(#333333,#FFA200,#FFA200) -
 */
@property(nonatomic, assign) NSInteger colorType;
/**
 * 图标大小
 * 60:默认 70:大 80:超大 90:特大,
 */
@property(nonatomic, assign) NSInteger iconSize;
/**
 * 是否展示车牌
 */
@property(nonatomic, assign) BOOL showPlate;
/**
 * 是否展示速度
 */
@property(nonatomic, assign) BOOL showSpeed;
/**
 * 14:默认 16:大 18:超大 20:特大, // ——————-字体大小
 */
@property(nonatomic, assign) NSInteger textSize;

@end


NS_ASSUME_NONNULL_END
