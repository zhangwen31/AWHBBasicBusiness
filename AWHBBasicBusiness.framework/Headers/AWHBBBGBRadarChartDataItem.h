//
//  AWHBBBGBRadarChartDataItem.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2024/5/3.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>


@interface AWHBBBGBRadarChartDataItem : NSObject

+ (instancetype)dataItemWithValue:(CGFloat)value description:(NSString *)description;

@property (nonatomic, assign) CGFloat value;

@property (nonatomic, strong) NSString *textDescription;

@end


