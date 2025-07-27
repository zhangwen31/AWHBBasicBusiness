//
//  AWHBBBTipsView.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2023/5/7.
//

#import <UIKit/UIKit.h>

typedef void(^AWHBBBTipsSureBlock)(void);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBTipsView : UIView

@property(nonatomic,strong)NSString *title;
@property(nonatomic,strong)NSString *contentText;
@property(nonatomic,strong)NSString *subContentText;

@property(nonatomic,copy)AWHBBBTipsSureBlock TipsSureBlock;

@end

NS_ASSUME_NONNULL_END
