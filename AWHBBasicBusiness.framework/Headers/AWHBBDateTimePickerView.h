//
//  AWHBBDateTimePickerView.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    AWHBBDatePickerViewDateTimeMode,//年月日,时分
    AWHBBDatePickerViewDateMode,//年月日
    AWHBBDatePickerViewTimeMode,//时分
    AWHBBDatePickerViewTimeSecond//年月日,时分秒
} AWHBBDatePickerViewMode;

@protocol AWHBBDateTimePickerViewDelegate <NSObject>
@optional
/**
 * 确定按钮
 */
-(void)didClickFinishDateTimePickerView:(NSString*)date;

/**
 * 取消按钮
 */
-(void)didClickCancelDateTimePickerView;

@end

@interface AWHBBDateTimePickerView : UIView

/**
 * 设置当前时间
 */
@property(nonatomic, strong)NSDate*currentDate;
/**
 * 设置最小时间 如果最大时间与最小时间都有值 必须小于最大时间 否则无效
 */
@property(nonatomic, strong)NSDate*minDate;
/**
 * 设置最大时间 如果最大时间与最小时间都有值 必须大于最小时间 否则无效
 */
@property(nonatomic, strong)NSDate*maxDate;
/**
 * 设置中心标题文字
 */
@property(nonatomic, strong)UILabel *titleL;

@property(nonatomic, strong)id<AWHBBDateTimePickerViewDelegate>delegate;
/**
 * 模式
 */
@property (nonatomic, assign) AWHBBDatePickerViewMode pickerViewMode;


/**
 * 掩藏
 */
- (void)hideDateTimePickerView;
/**
 * 显示
 */
- (void)showDateTimePickerView;
/**
 * 显示
 * @param bottom 距离底部显示距离
 */
- (void)showDateTimePickerView:(CGFloat)bottom;


@end

NS_ASSUME_NONNULL_END
