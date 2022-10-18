//
//  AWHBBAWHBBRequestModel.h
//  CarMonitoring
//
//  Created by 潘振 on 2019/9/5.
//  Copyright © 2019 潘振. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBBRequestModel : NSObject
//登录
+(void)requestLandURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic))callBack;
//请求消息
+(void)requestMsgURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray))callBack;
//修改密码
+(void)requestPwdURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSString *rspCode))callBack;
//使用帮助
+(void)requestUserHelpURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray,NSMutableArray *dataArray2,NSMutableArray *dataArray3,NSMutableArray *dataArray4))callBack;
//登录历史
+(void)requestLoginHistoryURL:(NSString *)URL withParameters:(NSDictionary *)parameters hudView:(UIView *)hudView  callback:(void (^)(NSDictionary *requestDic,NSMutableArray *dataArray))callBack;
//请求实时视频
+(void)requestRealTimeURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSString *string))callBack;
//平台视频
+(void)requestPlatformVideoURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSMutableArray *dataArray,NSString *str))callBack;
//终端视频
+(void)requestTerminalVideoURL:(NSString *)URL hudView:(UIView *)hudView  callback:(void (^)(NSMutableArray *dataArray,NSString *str))callBack;
//保存本地配置
+(void)requestSettingConfigSaveWithKey:(NSString *)key data:(NSString *)data;
//单车登录保存定位信息设置
+(void)requestSaveGpsColumnByCarWithCarIds:(NSString *)carIds data:(NSString *)data;
//更新本地配置
+ (void)updateLocationSettingConfig;
@end

NS_ASSUME_NONNULL_END
