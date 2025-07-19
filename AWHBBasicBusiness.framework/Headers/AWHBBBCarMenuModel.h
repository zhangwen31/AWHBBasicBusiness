//
//  AWHBBBCarMenuModel.h
//  AWHBBasicBusiness
//
//  Created by 王恒 on 2024/3/16.
//

#import <Foundation/Foundation.h>
#import <AWHBBasicBusiness/AWHBBBAppGpsColumnModel.h>

extern NSString * _Nullable const AWHBBBCarMenuModelDataKey; //车辆卡片菜单栏

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBCarMenuModel : NSObject

+ (NSArray<AWHBBBAppGpsColumnModel *> *)getCarMenus;

+ (NSArray<NSString *> *)getSelectCarMenus;

+ (void)saveCarMenus:(NSArray<AWHBBBAppGpsColumnModel *> *)carMenus;

@end

NS_ASSUME_NONNULL_END
