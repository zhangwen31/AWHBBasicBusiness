//
//  AWHBBBusinessTool.h
//  AWHBBasicBusiness
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>
//#import <UMShare/UMShare.h>
#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBBSettingConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBBusinessTool : NSObject

///** 分享三方应用  目前只支持微信
// * @param platformType 平台的类型
// * @param title 标题
// * @param desc 描述
// * @param image 缩略图（UIImage或者NSData类型，或者image_url）
// * @param url 分享链接
// * @param controller 需要分享界面  用于分享成功或者失败
// *
// */
//+ (void)shareSocialPlatformType:(UMSocialPlatformType)platformType title:(NSString *)title desc:(NSString *)desc image:(id)image url:(NSString *)url controller:(UIViewController *)controller;

//去除数组中model重复
+(NSArray *)removeModelDuplicatesFromArray:(NSMutableArray *)muArr;
//去除数组中model重复 后面的
+(NSArray *)removeModelDuplicatesLastFromArray:(NSMutableArray *)muArr;
//使用nsUserDefaults存储对象
+ (void)saveObject:(id)obj withKey:(NSString *)key;

+ (NSInteger)getCurrentShowMap;
//设置配置信息
+ (void)setSettingConfig:(AWHBBBSettingConfig *)settingConfig;
//获取配置信息
+ (AWHBBBSettingConfig *)getSettingConfig;
/**
 * 获取定位信息设置对应的名称
 */
+ (NSString *)getAppGpsColumnName:(NSString *)key;
//更新本地配置
+ (void)updateLocationSettingConfig;
//根据菜单ID获取菜单名称
+ (NSString *)getNameWithMenuId:(NSString *)menuId;

@end

NS_ASSUME_NONNULL_END
