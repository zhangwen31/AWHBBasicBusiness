//
//  AWHBBBUICountingLabel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2024/5/3.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AWHBBBUILabelCountingMethod) {
    AWHBBBUILabelCountingMethodEaseInOut,
    AWHBBBUILabelCountingMethodEaseIn,
    AWHBBBUILabelCountingMethodEaseOut,
    AWHBBBUILabelCountingMethodLinear,
    AWHBBBUILabelCountingMethodEaseInBounce,
    AWHBBBUILabelCountingMethodEaseOutBounce
};

typedef NSString* (^AWHBBBUICountingLabelFormatBlock)(CGFloat value);
typedef NSAttributedString* (^AWHBBBUICountingLabelAttributedFormatBlock)(CGFloat value);

@interface AWHBBBUICountingLabel : UILabel

@property (nonatomic, strong) NSString *format;
@property (nonatomic, assign) AWHBBBUILabelCountingMethod method;
@property (nonatomic, assign) NSTimeInterval animationDuration;

@property (nonatomic, copy) AWHBBBUICountingLabelFormatBlock formatBlock;
@property (nonatomic, copy) AWHBBBUICountingLabelAttributedFormatBlock attributedFormatBlock;
@property (nonatomic, copy) void (^completionBlock)(void);

-(void)countFrom:(CGFloat)startValue to:(CGFloat)endValue;
-(void)countFrom:(CGFloat)startValue to:(CGFloat)endValue withDuration:(NSTimeInterval)duration;

-(void)countFromCurrentValueTo:(CGFloat)endValue;
-(void)countFromCurrentValueTo:(CGFloat)endValue withDuration:(NSTimeInterval)duration;

-(void)countFromZeroTo:(CGFloat)endValue;
-(void)countFromZeroTo:(CGFloat)endValue withDuration:(NSTimeInterval)duration;

- (CGFloat)currentValue;

@end

