//
//  AWHBBBRefreshTimeView.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2022/10/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBRefreshTimeView : UIView

@property (nonatomic, copy) void (^refreshData)(void);

- (void)setupRefreshTime:(NSInteger)time;

- (void)cancelRefresh;

@end

NS_ASSUME_NONNULL_END
